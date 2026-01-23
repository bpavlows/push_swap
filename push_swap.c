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

void	process_split_args(char **arg)
{
	long	nbr;
	int		i;

	nbr = 0;
	i = 0;
	while (arg[i])
	{
		if (syntax_check(arg[j]))
			ft_error();
		nbr = ft_atol(arg[i]);
		if (nbr < INT_MIN || nbr > INT_MAX)
			ft_error();
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

	i = 1;
	if (ac < 4)
		return (0);
	else if (ac == 1)
		ft_printf("Use ./push_swap <value1> <value2> <value3> ... <valueN>");
	while (av[i])
	{
		if (av[i][0] == '\0')
			ft_error();
		args_split = ft_split(str[i], ' ');
		if (!args_split || args_split[0] == NULL)
		{
			//criar funcao para liberar a memoria
			ft_error();
		}
		process_split_args(args_split);
		free(args_split);
		i++;
	}
	return (0);
}
