/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:44:40 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/28 11:28:50 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "Betania";
	char a = 'a';
	char *p = ft_strchr(str, a);
	printf("\nStr:\t\t%s\n\nFt_strchr:\t%s", str, p);
	p = strchr(str, a);
	printf("\n\nStrchr: \t%s", p);
	return (0);
}*/
