/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:22:33 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/28 13:28:50 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "betania";
	int i = 0;
	printf("%s\n", str);
	while (str[i])
	{
		printf("%c", ft_toupper(str[i]));
		i++;
	}
	printf("\n");
	return (0);
}*/
