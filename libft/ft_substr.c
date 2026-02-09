/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:46:16 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/22 11:26:36 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*valid(void)
{
	char	*sub;

	sub = malloc(1);
	if (!sub)
		return (NULL);
	sub[0] = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s_len;
	char	*sub;

	i = 0;
	s_len = 0;
	if (!s)
		return (NULL);
	while (s[s_len])
		s_len++;
	if (start >= s_len)
		return (valid());
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i])
		sub[j++] = s[i++];
	sub[j] = '\0';
	return (sub);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "betania";
	int sub = 2;
	int size = 4;
	char *res = ft_substr(str, sub, size);
	printf("\nStr:\t\t%s\nSub:\t\t%d\nSize:\t\t%d\n\n", str, sub, size);
	printf("Ft_substr:\t%s\n\n", res);
	free(res);
	return (0);
}*/
