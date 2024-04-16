/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:16:37 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/16 15:18:43by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void    *ft_calloc(unsigned int count, unsigned int size)
{
    unsigned char   *ptr;

    ptr = (unsigned char *) malloc(count * size);
    if (!ptr)
        return 0;
    ft_bzero(ptr, count * size);
    return (ptr);
}
