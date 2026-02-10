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
	long	nbr;
	int		i;
	int		j;

	nbr = 0;
	i = 0;
	while (arg[i])
	{
		args_split = ft_split(arg[i], ' ');
		if (!args_split)
			ft_error(stack_a);
		j = 0;
		while (args_split[j])
		{
			if (syntax_check(args_split[j])) //cada arg depois do split
				ft_error(stack_a);
			nbr = ft_atol(args_split[j]);
			if (nbr < INT_MIN || nbr > INT_MAX) //pre-definido pelo sistema
				ft_error(stack_a);
			if (check_duplicates(*stack_a, (int)nbr)) // vai checar se o numero atual ja esta na stack
				ft_error(stack_a);
			add_node_back(stack_a, get_new_node((int)nbr));
			free(args_split[j]);
			j++;
		}
		free(args_split);
		i++;
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1 || (ac == 2 && av[1][0] == '\0'))
		return (1);
		// testar 09 e 9 & 9 e -9
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
