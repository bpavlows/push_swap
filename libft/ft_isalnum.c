/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:14:49 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/27 10:30:22 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int a = 'A';
	int b = 'b';
	int c = '6';
	int d = ' ';
	int e = '\t';
	int f = 6;
	printf("%d\t\t%d\n", ft_isalnum(a), isalnum(a));
	printf("%d\t\t%d\n", ft_isalnum(b), isalnum(b));
	printf("%d\t\t%d\n", ft_isalnum(c), isalnum(c));
	printf("%d\t\t%d\n", ft_isalnum(d), isalnum(d));
	printf("%d\t\t%d\n", ft_isalnum(e), isalnum(e));
	printf("%d\t\t%d\n", ft_isalnum(f), isalnum(f));
	return (0);
}*/
