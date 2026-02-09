/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:47:44 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/28 09:14:54 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (((size_t) dest - (size_t) src) < n)
	{
		i = n;
		while (--i < n)
			((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
	}
	else
	{
		while (i < n)
		{
			((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char src1[] = "Betania";
	char dest1[50] = "Quevedo";
	char src2[] = "Betania";
	char dest2[50] = "Quevedo";
	int size = 5;
	printf("\nSrc1:\t%s\nDest1:\t%s\nSrc2:\t%s\nDest2:\t%s\nSize:\t%d\n\n", src1, dest1, src2, dest2, size);
	ft_memmove(dest1, src1, size);
	printf("\nSrc1:\t%s\nDest1:\t%s\n\n", src1, dest1);
	memmove(dest2, src2, size);
	printf("\nSrc2:\t%s\nDest2:\t%s\n\n", src2, dest2);
	return (0);
}*/
