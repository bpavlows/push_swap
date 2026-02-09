/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 08:05:32 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/27 12:52:26 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total;
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	total = nmemb * size;
	ptr = (unsigned char *) malloc(total);
	if (ptr == NULL)
		return (NULL);
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
/*
int	main(void)
{
	int n = 5;
	int m = 0;
	int *i = (int *)ft_calloc(n, sizeof(int));
	int *j = (int *)calloc(n, sizeof(int));
	if (!i || !j)
		return (0);
	printf("Ft_calloc:\n");
	while (m < n)
	{
		printf("Indice: %d\t\t Valor: %d\n", m, i[m]);
		m++;
	}
	m = 0;
	printf("\nCalloc:\n");
	while (m < n)
	{
		printf("Indice: %d\t\t Valor: %d\n", m, j[m]);
		m++;
	}
	free(i);
	free(j);
	return (0);
}*/
