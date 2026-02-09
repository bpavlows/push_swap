/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 09:35:12 by bpavlows          #+#    #+#             */
/*   Updated: 2025/12/21 14:57:21 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_formats(va_list item, const char format)
{
	int		len;
	char	c;

	len = 0;
	if (format == 'd' || format == 'i')
		len += ft_putnbr_pf(va_arg(item, int));
	else if (format == '%')
		len += write(1, "%", 1);
	else if (format == 'c')
	{
		c = va_arg(item, int);
		len += write(1, &c, 1);
	}
	else if (format == 's')
		len += ft_putstr_pf(va_arg(item, char *));
	else if (format == 'x')
		len += dec_for_hex((unsigned int)va_arg(item, int), 'x');
	else if (format == 'X')
		len += dec_for_hex((unsigned int)va_arg(item, int), 'X');
	else if (format == 'u')
		len += ft_putnbr_uns(va_arg(item, unsigned int));
	else if (format == 'p')
		len += ft_print_ptr(va_arg(item, void *));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	item;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start (item, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			len += ft_formats(item, format[i + 1]);
			i++;
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(item);
	return (len);
}
