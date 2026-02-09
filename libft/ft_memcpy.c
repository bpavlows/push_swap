/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:19:28 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/28 08:38:50 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char src[] = "Quevedo";
	char dest[50] = "Betania ";
	char src2[] = "Quevedo";
	char dest2[50] = "Betania ";
	int	size = 3;
	printf("\nSrc:\t%s\nDest:\t%s\nSize:\t%d\n\n", src, dest, size);
	ft_memcpy(dest, src, size);
	printf("Ft_memcpy:\n\nSrc:\t%s\nDest:\t%s\n\n", src, dest);
	memcpy(dest2, src2, size);
	printf("Memcpy:\n\nSrc:\t%s\nDest:\t%s\n\n", src2, dest2);
	return (0);
}*/
