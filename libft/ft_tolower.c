/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:10:35 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/28 13:29:47 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
#include <stdio.h>
int     main(void)
{
        char str[] = "BETANIA";
        int i = 0;
        printf("%s\n", str);
        while (str[i])
        {
                printf("%c", ft_tolower(str[i]));
                i++;
        }
        printf("\n");
        return (0);
}*/
