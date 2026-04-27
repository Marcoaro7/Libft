/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcooli <marcooli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:15:49 by marcooli          #+#    #+#             */
/*   Updated: 2026/04/21 17:19:42 by marcooli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	k;
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	join = malloc(i + j + 1);
	if (!join)
		return (NULL);
	k = 0;
	while (k < i + j)
	{
		if (k < i)
			join[k] = s1[k];
		else
			join[k] = s2[k - i];
		k++;
	}
	join[k] = '\0';
	return (join);
}
