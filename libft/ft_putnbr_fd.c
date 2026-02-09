/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:29:11 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/28 10:00:39 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	i;
	char	c;

	i = n;
	if (i < 0)
	{
		write(fd, "-", 1);
		i *= -1;
	}
	if (i > 9)
		ft_putnbr_fd((i / 10), fd);
	c = (i % 10) + '0';
	write(fd, &c, 1);
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 2147483647;
	int b = 42;
	int c = 0;
	int d = -42;
	int e = -2147483648;
	printf("\na:\n%d\nft:\n", a);
	ft_putnbr_fd(a, 1);
	printf("\n\nb:\n%d\nft:\n", b);
	ft_putnbr_fd(b, 1);
	printf("\n\nc:\n%d\nft:\n", c);
	ft_putnbr_fd(c, 1);
	printf("\n\nd:\n%d\nft:\n", d);
	ft_putnbr_fd(d, 1);
	printf("\n\ne:\n%d\nft:\n", e);
	ft_putnbr_fd(e, 1);
	printf("\n\n");
	return (0);
}*/
