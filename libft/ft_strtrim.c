/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 08:37:08 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/22 11:29:23 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char c, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	int		start;
	int		end;
	char	*str;

	i = 0;
	k = 0;
	start = 0;
	end = ft_strlen((char *)s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && in_set(s1[start], set))
		start++;
	while (end >= start && in_set(s1[end], set))
		end--;
	str = malloc((end - start + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = start;
	while (i <= end)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "xxxxBetaniaxPavlowskixdexQuevedoxxxxxxxxxx";
	char *pt = "x";
	char *res = ft_strtrim(str, pt);
	printf("\nStr:\t\t%s\nRes:\t\t%s\n\n", str, res);
	free(res);
	return (0);
}*/
