/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 12:45:01 by bpavlows          #+#    #+#             */
/*   Updated: 2025/12/21 14:22:54 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_print_ptr(void *ptr)
{
	int				len;
	unsigned long	adress;

	len = 0;
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	adress = (unsigned long)ptr;
	len += write(1, "0x", 2);
	len += ft_puthex_pf(adress, "0123456789abcdef");
	return (len);
}

int	ft_putstr_pf(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}

int	ft_putnbr_pf(int n)
{
	char		c;
	int			len;
	long int	l;

	l = n;
	len = 0;
	if (l < 0)
	{
		write(1, "-", 1);
		l = -l;
		len++;
	}
	if (l >= 10)
		len += ft_putnbr_pf(l / 10);
	c = (l % 10) + '0';
	write (1, &c, 1);
	len++;
	return (len);
}

int	ft_putnbr_uns(unsigned int n)
{
	char	c;
	int		len;

	len = 0;
	if (n >= 10)
		len += ft_putnbr_uns (n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
	len++;
	return (len);
}
