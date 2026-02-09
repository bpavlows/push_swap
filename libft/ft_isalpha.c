/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:04:47 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/27 11:29:47 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
        printf("%d\t\t%d\n", ft_isalpha(a), isalpha(a));
        printf("%d\t\t%d\n", ft_isalpha(b), isalpha(b));
        printf("%d\t\t%d\n", ft_isalpha(c), isalpha(c));
        printf("%d\t\t%d\n", ft_isalpha(d), isalpha(d));
        printf("%d\t\t%d\n", ft_isalpha(e), isalpha(e));
        printf("%d\t\t%d\n", ft_isalpha(f), isalpha(f));
        return (0);
}
*/
