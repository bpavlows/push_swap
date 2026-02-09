/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:10:28 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/27 11:33:00 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
        printf("%d\t\t%d\n", ft_isdigit(a), isdigit(a));
        printf("%d\t\t%d\n", ft_isdigit(b), isdigit(b));
        printf("%d\t\t%d\n", ft_isdigit(c), isdigit(c));
        printf("%d\t\t%d\n", ft_isdigit(d), isdigit(d));
        printf("%d\t\t%d\n", ft_isdigit(e), isdigit(e));
        printf("%d\t\t%d\n", ft_isdigit(f), isdigit(f));
        return (0);
}
*/
