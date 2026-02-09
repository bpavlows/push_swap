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
	int				above_median;
	int				cheapest;
	struct s_stack	*target_node;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

//int		push_swap(char **arg); //ainda nao fiz
//void	imprimir_lista(t_stack *a);

long	ft_atol(const char *str);
int		syntax_check(char *arg);
int		check_duplicates(t_stack *a, int n);
int		stack_len(t_stack *stack);
int		stack_sorted(t_stack *stack);
void	init_stack_a(t_stack **a, char **arg);
void	ft_error(t_stack **stack);
void	process_split_args(t_stack **stack_a, char **arg);
void	add_node_back(t_stack **stack, t_stack *new_node);
//void	swap(t_stack **head);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
//void	rotate(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
//void	reverse_rotate(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
//void	push(t_stack **dest, t_stack **src);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **b, t_stack **a);
void	sort_three(t_stack **a);
void	current_index(t_stack *stack);
void	set_target_a(t_stack *a, t_stack *b);
void	cost_analysis_a(t_stack *a, t_stack *b);
void	set_cheapest(t_stack *stack);
void	init_nodes_a(t_stack *a, t_stack *b);
void	prep_for_push(t_stack **stack, t_stack *top_node, char stack_node);
void	move_a_to_b(t_stack **a, t_stack **b);
void	init_nodes_b(t_stack *a, t_stack *b);
void	sort_stacks(t_stack **a, t_stack **b);
void	free_stack(t_stack **stack);
t_stack	*find_max(t_stack *stack);
t_stack	*find_min(t_stack *stack);
t_stack	*find_higest(t_stack *stack);
t_stack	*get_new_node(int content);
t_stack	*find_last_node(t_stack *head);

#endif
