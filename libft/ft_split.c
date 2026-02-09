/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:41:14 by bpavlows          #+#    #+#             */
/*   Updated: 2025/10/28 11:20:28 by bpavlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **res, int j)
{
	while (j > 0)
	{
		j--;
		free(res[j]);
	}
	free(res);
}

static int	word_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*word_dup(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static int	next_word(const char *s, char c, int *start, int *end)
{
	*start = *end;
	while (s[*start] && s[*start] == c)
		(*start)++;
	*end = *start;
	while (s[*end] && s[*end] != c)
		(*end)++;
	return (*end > *start);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		end;
	int		start;
	char	**res;

	j = 0;
	end = 0;
	start = 0;
	if (!s)
		return (NULL);
	res = malloc((word_count(s, c) + 1) * sizeof (char *));
	if (!res)
		return (NULL);
	while (next_word(s, c, &start, &end))
	{
		res[j] = word_dup(s, start, end);
		if (!res[j])
			return (ft_free(res, j), NULL);
		j++;
	}
	res[j] = NULL;
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "xxxBetaniaxPavlowskixxxQuevedoxxxx";
	int j = 0;
	char **p = ft_split(str, 'x');
	if (!p)
		return (0);
	while (p[j])
	{
		printf("\n%d\t%s\n", j, p[j]);
		j++;
	}
	j = 0;
	while (p[j])
		free(p[j++]);
	free(p);
	return (0);
}*/
