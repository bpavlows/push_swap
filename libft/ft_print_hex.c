/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 12:45:49 by bpavlows          #+#    #+#             */
/*   Updated: 2025/12/21 14:22:59 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	dec_for_hex(unsigned int dec, char type)
{
	char	*base;
	char	buffer[20];
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (type == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (dec == 0)
		return (write(1, "0", 1));
	while (dec != 0)
	{
		buffer[i++] = base[dec % 16];
		dec /= 16;
	}
	while (i > 0)
	{
		i--;
		write(1, &buffer[i], 1);
		len++;
	}
	return (len);
}

int	ft_puthex_pf(unsigned long n, char *base)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_puthex_pf(n / 16, base);
	len += write(1, &base[n % 16], 1);
	return (len);
}
