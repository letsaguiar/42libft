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

#include <stdint.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *ptr;
    
    if (count > SIZE_MAX / size)
        return (NULL);
    ptr = malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}