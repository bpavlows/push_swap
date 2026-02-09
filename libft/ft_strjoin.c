/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 07:03:07 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/28 13:23:35 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t  ft_strlen(const char *s)
{
        size_t  i;

        i = 0;
        while (s[i])
                i++;
        return (i);
}*/

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	int		len1;
	int		len2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	res = malloc((len1 + len2 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (len1 > i)
		res[j++] = s1[i++];
	i = 0;
	while (len2 > i)
		res[j++] = s2[i++];
	res[j] = '\0';
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char str1[] = "Betania ";
	char str2[] = "Quevedo";
	printf("\nStr 1:\t%s\nStr 2:\t%s\n\n", str1, str2);
	char *res = ft_strjoin(str1, str2);
	printf("%s\n\n", res);
	free(res);
	return (0);
}*/
