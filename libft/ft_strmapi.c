/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 08:49:41 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/22 11:30:41 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char    ft_upper(unsigned int i, char c)
{
        (void)i;
        if (c >= 'a' && c <= 'z')
                return (c - 32);
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*str;

	i = 0;
	len = 0;
	if (!s || !f)
		return (NULL);
	while (s[len])
		len++;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "betania pavlowski";
	char *res = ft_strmapi(str, ft_upper);
	printf("\nStr:\t\t%s\nRes:\t\t%s\n\n", str, res);
	free(res);
	return (0);
}*/
