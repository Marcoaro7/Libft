/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcooli <marcooli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:26:19 by marcooli          #+#    #+#             */
/*   Updated: 2026/04/24 15:45:48 by marcooli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s_ptr;
	unsigned char		*d_ptr;

	s_ptr = (const unsigned char *)src;
	d_ptr = (unsigned char *)dest;
	if (dest == src || n == 0)
		return (dest);
	if (d_ptr > s_ptr)
	{
		while (n--)
			d_ptr[n] = s_ptr[n];
	}
	else
	{
		while (n--)
			*d_ptr++ = *s_ptr++;
	}
	return (dest);
}
