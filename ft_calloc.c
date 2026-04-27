/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcooli <marcooli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:16:21 by marcooli          #+#    #+#             */
/*   Updated: 2026/04/23 15:16:40 by marcooli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	if (nitems == 0 || size == 0)
		return (malloc(0));
	if (nitems > 0 && size > SIZE_MAX / nitems)
		return (NULL);
	ptr = malloc(nitems * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < (nitems * size))
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
