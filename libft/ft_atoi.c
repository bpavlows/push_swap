/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:09:27 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/27 09:48:06 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		n = n * 10 + (nptr[i] - '0');
		i++;
	}
	return (n * sign);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "    42";
	char str2[] = "+42";
	char str3[] = "-42";
	char str4[] = "++42";
	char str5[] = "-2147483648";
	char str6[] = "2147483647";
	char str7[] = "3147483649";
	printf("\nFt: %d\t\t%d\n", ft_atoi(str1), atoi(str1));
	printf("\nFt: %d\t\t%d\n", ft_atoi(str2), atoi(str2));
	printf("\nFt: %d\t\t%d\n", ft_atoi(str3), atoi(str3));
	printf("\nFt: %d\t\t%d\n", ft_atoi(str4), atoi(str4));
	printf("\nFt: %d\t\t%d\n", ft_atoi(str5), atoi(str5));
	printf("\nFt: %d\t\t%d\n", ft_atoi(str6), atoi(str6));
	printf("\nFt: %d\t\t%d\n", ft_atoi(str7), atoi(str7));
	return (0);
}*/
