/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:08:41 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/28 08:17:35 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*p;

	p = s;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
 	char str[] = "0123456789";
	printf("\n%s\n\n", str);
	char *p = ft_memchr(str, '6', sizeof(str));
	printf("Ft_memchr:\t%s\n", p);
	p = memchr(str, '6', sizeof(str));
	printf("Memchr: \t%s\n\n", p);
	return (0);
}*/
