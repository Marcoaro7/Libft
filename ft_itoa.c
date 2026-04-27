/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcooli <marcooli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:29:46 by marcooli          #+#    #+#             */
/*   Updated: 2026/04/23 14:26:12 by marcooli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_count(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*nb;
	long	l;
	int		i;
	int		len;

	len = char_count(n);
	nb = malloc(len + 1);
	if (!nb)
		return (NULL);
	l = n;
	i = len - 1;
	if (l < 0)
	{
		nb[0] = '-';
		l = -l;
	}
	if (l == 0)
		nb[i--] = '0';
	while (l > 0)
	{
		nb[i--] = l % 10 + '0';
		l /= 10;
	}
	nb[len] = '\0';
	return (nb);
}
