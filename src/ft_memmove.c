/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 20:19:19 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/07 21:18:59 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	verify_overlaping(void *dest, void *src, unsigned int n)
{
	long	dest_address;
	long	src_address;

	dest_address = (long) &dest;
	src_address = (long) &src;
	n -= 1;
	return (
		(dest_address >= src_address && dest_address <= src_address + n)
		|| (dest_address + n >= src_address && dest_address + n <= src_address + n)
		|| (dest_address <= src_address && dest_address + n >= src_address + n)
	);
}

void	ft_memmove(void *dest, void *src, unsigned int n)
{
	int	diff;

	if (!verify_overlaping(dest, src, n))
		ft_memcpy(dest, src, n);
	else if (&src < &dest)
	{
		diff = (&dest + n) - (&src + n);
		ft_memcpy(&src[n], src, n - diff);
	}
	else
	{
		diff = (&src) - (&dest);
		ft_memcpy(&dest, src, n - diff);
	}
}
