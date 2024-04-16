/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 08:47:00 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/16 08:50:12 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memcpy(void *dest, const void *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (i < n)
    {
        ((char *) dest)[i] = ((char *) src)[i];
        i++;
    }

    return (dest);
}