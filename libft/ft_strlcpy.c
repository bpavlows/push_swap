/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 08:16:10 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/22 11:39:33 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	while ((i < size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/*
#include <stdio.h>
int     main(void)
{
        char src[] = "Quevedo";
        char dest[20] = "";
        int size = 5;
        printf("\nSrc:\t%s\nDest:\t%s\n\n", src, dest);
        ft_strlcpy(dest, src, size);
        printf("Ft_strlcpy\nSrc:\t%s\nDest:\t%s\n\n", src, dest);
        return (0); //funcao original somente para macOs
}*/
