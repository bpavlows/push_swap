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

void	process_split_args(t_stack **stack_a, char **arg)
{
	long	nbr;
	int		i;
	t_stack	*new_node;

	nbr = 0;
	i = 0;
	while (arg[i])
	{
		if (syntax_check(arg[i])) //cada arg depois do split
			ft_error();
		nbr = ft_atol(arg[i]);
		if (nbr < INT_MIN || nbr > INT_MAX) //pre-definido pelo sistema
			ft_error();
		if (check_duplicates(*stack_a, (int)nbr)) // vai checar se o numero atual ja esta na stack
			ft_error();
		new_node = get_new_node((int)nbr);
		add_node_back(stack_a, new_node);
		i++;
	}
	// se estiver ok, adc na stack a
}
/*
int	push_swap(char **arg)
*/

int	main(int ac, char **av)
{
	int		i;
	char	**args_split;
	t_stack	*stack_a;

	i = 1;
	stack_a = NULL;
	if (ac == 1)
		ft_printf("Use ./push_swap <value1> <value2> <value3> ... <valueN>");
		// testar 09 e 9 & 9 e -9
	while (av[i])
	{
		if (av[i][0] == '\0') //caso ./a.out ""
			ft_error();
		args_split = ft_split(av[i], ' ');
		if (!args_split || args_split[0] == NULL) //caso ./a.out " "
		{
			//criar funcao para liberar a memoria
			ft_error();
		}
		process_split_args(&stack_a, args_split);
		free(args_split);
		i++;
	}
	return (0);
}
