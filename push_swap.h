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

int		push_swap(char **arg); //ainda nao fiz

long	ft_atol(const char *str);
void	ft_error(void);
int		syntax_check(char *arg);
void	process_split_args(char *arg);

#endif
