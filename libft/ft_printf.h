/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 07:52:43 by bpavlows          #+#    #+#             */
/*   Updated: 2025/12/21 14:28:35 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	dec_for_hex(unsigned int dec, char type);
int	ft_puthex_pf(unsigned long n, char *base);
int	ft_print_ptr(void *ptr);
int	ft_putnbr_uns(unsigned int n);
int	ft_putstr_pf(char *s);
int	ft_putnbr_pf(int n);

#endif
