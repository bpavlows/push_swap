/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:13:31 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/28 09:27:48 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str[] = "betania";
	int size = 4;
	char c = 'a';
	printf("\nString:\t\t%s\nSize:\t\t%d\nChar:\t\t%c\n", str, size, c);
	printf("\nFt_memset:\t%s\n", (char *)ft_memset(str, c, size));
	printf("\nMemset: \t%s\n\n", (char *)memset(str, c, size));
	return (0);
}*/
