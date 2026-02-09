/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 08:43:26 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/28 11:42:05 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int			i;
	int			j;
	char		*d;

	i = 0;
	while (s[i])
		i++;
	d = malloc((i + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		d[j] = s[i];
		i++;
		j++;
	}
	d[j] = '\0';
	return (d);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str[] = "Betania Pavlowski";
	char *dup = ft_strdup(str);
	char *dupp = strdup(str);
	printf("\nStr:\t\t%s\n\nFt_strdup:\t%s\nStrdup: \t%s\n\n", str, dup, dupp);
	free(dup);
	free(dupp);
	return (0);
}*/
