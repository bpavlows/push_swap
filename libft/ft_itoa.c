/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:32:01 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/27 12:42:11 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		i++;
		nbr = -nbr;
	}
	if (nbr == 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			len;
	long		nbr;
	char		*res;

	nbr = n;
	len = int_len(nbr);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr == 0)
		res[0] = '0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		res[--len] = ((nbr % 10) + '0');
		nbr = nbr / 10;
	}
	return (res);
}
/*
#include <stdlib.h>
#include <stdio.h>
int     main(void)
{
	int i = 0;
	int a[] = {6, 48, 36, 128};
	while (i < 4)
	{
		char *res = ft_itoa(a[i]);
        	printf("%s\n", res);
		free (res);
		i++;
	}
	i = 0;
	char buf[35];
	char *p;
	while (i < 4)
	{
		p = itoa(a[i], buf, 10);
		printf("%s\n", p);
		free (p);
		i++;
	}
	return (0);
}*/
