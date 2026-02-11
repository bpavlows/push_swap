/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 13:12:05 by bpavlows          #+#    #+#             */
/*   Updated: 2026/01/02 13:12:20 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_matrix(char **argv)
{
	int	i;

	i = 0;
	if (!argv)
		return ;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

static void	fill_stack(t_stack **stack, char **split)
{
	int		i;
	long	nbr;

	i = 0;
	while (split[i])
	{
		if (syntax_check(split[i]))
		{
			free_matrix(split);
			ft_error(stack);
		}
		nbr = ft_atol(split[i]);
		if ((nbr < INT_MIN || nbr > INT_MAX)
			|| (check_duplicates(*stack, (int)nbr)))
		{
			free_matrix(split);
			ft_error(stack);
		}
		add_node_back(stack, get_new_node((int)nbr));
		i++;
	}
	free_matrix(split);
}

void	free_stack(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*current;

	if (!stack || !*stack)
		return ;
	current = *stack;
	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*stack = NULL;
}

void	process_split_args(t_stack **stack_a, char **arg)
{
	char	**args_split;
	int		i;

	i = 0;
	while (arg[i])
	{
		args_split = ft_split(arg[i], ' ');
		if (!args_split)
			ft_error(stack_a);
		fill_stack(stack_a, args_split);
		i++;
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1 || (ac == 2 && av[1][0] == '\0'))
		ft_error(&stack_a);
	if (only_spaces(av))
		ft_error(&stack_a);
	process_split_args(&stack_a, av + 1);
	if (!stack_sorted(stack_a))
	{
		if (stack_len(stack_a) == 2)
			sa(&stack_a);
		else if (stack_len(stack_a) == 3)
			sort_three(&stack_a);
		else
			sort_stacks(&stack_a, &stack_b);
	}
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
