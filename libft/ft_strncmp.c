/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:02:27 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/25 10:52:13 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[] = "Betania Pavlowski";
	char str2[] = "Betania Quevedo";
	printf("\nString 1:\t%s\nString 2:\t%s\n\n", str1, str2);
	int size = 10;
	int res = ft_strncmp(str1, str2, size);
	printf("Size:\t%d\n\nFt_strncmp:\n", size);
	if (res > 0)
		printf("Nos primeiros %d caracteres, a string 1 eh maior\n", size);
	if (res == 0)
		printf("Nos primeiros %d caracteres, as duas sao iguais\n", size);
	if (res < 0)
		printf("Nos primeiros %d caracteres, a string 2 eh maior\n", size);
	int res2 = strncmp(str1, str2, size);
	printf("\nStrncmp:\n");
	if (res2 > 0)
                printf("Nos primeiros %d caracteres, a string 1 eh maior\n\n", size);
        if (res2 == 0)
                printf("Nos primeiros %d caracteres, as duas sao iguais\n\n", size);
        if (res2 < 0)
                printf("Nos primeiros %d caracteres, a string 2 eh maior\n\n", size);
	return (0);
}*/
