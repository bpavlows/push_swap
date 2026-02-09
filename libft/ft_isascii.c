/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:19:42 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/27 11:32:04 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
        int c = 128;
        int d = ' ';
        int e = '\t';
        int f = 6;
        printf("%d\t\t%d\n", ft_isascii(a), isascii(a));
        printf("%d\t\t%d\n", ft_isascii(b), isascii(b));
        printf("%d\t\t%d\n", ft_isascii(c), isascii(c));
        printf("%d\t\t%d\n", ft_isascii(d), isascii(d));
        printf("%d\t\t%d\n", ft_isascii(e), isascii(e));
        printf("%d\t\t%d\n", ft_isascii(f), isascii(f));
        return (0);
}
*/
