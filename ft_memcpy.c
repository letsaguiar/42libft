/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 08:47:00 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/17 10:22:29 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        ((char *) dest)[i] = ((char *) src)[i];
        i++;
    }

    return (dest);
}