/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:09:29 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/22 12:09:32 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_isdigit(int c);
char	**ft_split(const char *s, char c);
void	ft_putstr_fd(char *s, int fd);
int		ft_printf(const char *format, ...);
int		ft_formats(va_list item, const char format);
int		dec_for_hex(unsigned int dec, char type);
int		ft_puthex_pf(unsigned long n, char *base);
int		ft_print_ptr(void *ptr);
int		ft_putnbr_uns(unsigned int n);
int		ft_putstr_pf(char *s);
int		ft_putnbr_pf(int n);

#endif
