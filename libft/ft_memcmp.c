/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:28:05 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/28 08:36:38 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > i)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str1[] = "Betania Pavlowski";
	char str2[] = "Betania Quevedo";
	printf("\nString 1:\t%s\nString 2:\t%s\n\n", str1, str2);
	int size = 10;
	int res = ft_memcmp(str1, str2, size);
	printf("Size:\t%d\n\nFt_memcmp:\n", size);
	if (res > 0)
		printf("Nos primeiros %d caracteres, a string 1 eh maior\n", size);
	if (res == 0)
		printf("Nos primeiros %d caracteres, as duas sao iguais\n", size);
	if (res < 0)
		printf("Nos primeiros %d caracteres, a string 2 eh maior\n", size);
	int res2 = memcmp(str1, str2, size);
	printf("\nMemcmp:\n");
	if (res2 > 0)
                printf("Nos primeiros %d caracteres, a string 1 eh maior\n\n", size);
        if (res2 == 0)
                printf("Nos primeiros %d caracteres, as duas sao iguais\n\n", size);
        if (res2 < 0)
                printf("Nos primeiros %d caracteres, a string 2 eh maior\n\n", size);
	return (0);
}*/
