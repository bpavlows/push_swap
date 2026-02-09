/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:56:05 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/27 09:55:42 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
	return ;
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str1[] = "Betania42";
	char str2[] = "Betania42";
	printf("\n%s\n%s\n\n", str1, str2);
	ft_bzero(str1, 7);
	bzero(str2, 7);
	printf("%s\n\n%s\n", str1, str2);
	return (0);
}*/
