/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcooli <marcooli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:45:34 by marcooli          #+#    #+#             */
/*   Updated: 2026/04/23 14:56:11 by marcooli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	i;
	char	a;

	i = n;
	if (i < 0)
	{
		write (fd, "-", 1);
		i = -i;
	}
	if (i >= 10)
		ft_putnbr_fd((int)(i / 10), fd);
	a = i % 10 + '0';
	write (fd, &a, 1);
}
