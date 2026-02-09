/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:17:21 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/25 09:38:38 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	len_src = 0;
	len_dst = 0;
	while (dst[len_dst] && len_dst < size)
		len_dst++;
	while (src[len_src])
		len_src++;
	if (len_dst == size)
		return (size + len_src);
	while (src[i] && (len_dst + i + 1) < size)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	if (len_dst < size)
		dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "Quevedo";
	char dest[20] = "Betania ";
	int size = 15;
	printf("\nSrc:\t%s\nDest:\t%s\n\n", src, dest);
	ft_strlcat(dest, src, size);
	printf("Ft_strlcat\nSrc:\t%s\nDest:\t%s\n\n", src, dest);
	return (0); //funcao original somente para macOs
}*/
