/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcooli <marcooli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:03:14 by marcooli          #+#    #+#             */
/*   Updated: 2026/04/24 16:42:31 by marcooli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

static size_t	subs_count(char const *s, char c)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			k++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (k);
}

static char	*create_subs(char const *s, size_t start, size_t end)
{
	char	*str;
	size_t	i;

	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

static int	fill(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			split[j] = create_subs(s, start, i - 1);
			if (!split[j])
				return (0);
			j++;
		}
	}
	split[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (subs_count(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	if (!fill(split, s, c))
	{
		while (i < subs_count(s, c))
			free(split[i++]);
		free(split);
		return (NULL);
	}
	return (split);
}
/*
int	main()
{
	char	**result;
	int		i;

	// string de teste
	char *str = "ola,como,estas,tudo,bem";
	char sep = ',';

	result = ft_split(str, sep);
	if (!result)
	{
		printf("Erro ao fazer split\n");
		return (1);
	}

	i = 0;
	while (result[i])
	{
		printf("result[%d]: %s\n", i, result[i]);
		free(result[i]); // libertar cada string
		i++;
	}
	free(result); // libertar o array

	return (0);
}
*/
