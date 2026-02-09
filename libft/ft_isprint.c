/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:21:01 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/27 11:34:27 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int     main(void)
{
        int a = 'A';
        int b = 'b';
        int c = '6';
        int d = ' ';
        int e = '\t';
        int f = 6;
        printf("%d\t\t%d\n", ft_isprint(a), isprint(a));
        printf("%d\t\t%d\n", ft_isprint(b), isprint(b));
        printf("%d\t\t%d\n", ft_isprint(c), isprint(c));
        printf("%d\t\t%d\n", ft_isprint(d), isprint(d));
        printf("%d\t\t%d\n", ft_isprint(e), isprint(e));
        printf("%d\t\t%d\n", ft_isprint(f), isprint(f));
        return (0);
}
*/
