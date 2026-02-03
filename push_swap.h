/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 09:14:51 by bpavlows          #+#    #+#             */
/*   Updated: 2026/01/16 09:22:48 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include "Libft/libft.h"

typedef struct	s_stack
{
	int				value;
	int				index;
	int				push_cost;
	int				adobe_median;
	int				cheapest;
	struct s_stack	*target_node;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

//int		push_swap(char **arg); //ainda nao fiz

long	ft_atol(const char *str);
int		syntax_check(char *arg);
int		check_duplicates(t_stack *a, int n);
void	init_stack_a(t_stack **a, char **arg);
void	ft_error(void);
void	process_split_args(t_stack **stack_a, char **arg);
void	add_node_back(t_stack **stack, t_stack *new_node);
void	swap(t_stack **head);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
t_stack	*get_new_node(int content);
t_stack	*find_last_node(t_stack *head);

#endif
