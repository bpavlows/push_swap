/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:43:45 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/25 10:54:16 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t				i;
	size_t				j;
	unsigned const char	*a;
	unsigned const char	*b;

	i = 0;
	a = (const unsigned char *)big;
	b = (const unsigned char *)little;
	if (*b == '\0')
		return ((char *)a);
	while (a[i] && i < len)
	{
		j = 0;
		while ((a[i + j] == b[j]) && i + j < len)
		{
			if (b[j + 1] == '\0')
				return ((char *)&a[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "betania";
	char lit[] = "ani";
	int size = 10;
	char *res = ft_strnstr(str, lit, size);
	printf("\nStr:\t\t%s\nLit:\t\t%s\nSize:\t\t%d\n\n", str, lit, size);
	printf("Ft_strnstr:\t%s\n\n", res);
	char *res2 = strstr(str, lit);
	printf("Strstr:\t\t%s\n\n", res2); //strnstr nao roda
	return (0);
}*/
