/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 08:41:28 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/17 10:21:14 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
        ((char *) str)[i++] = c;
    
    return (str);
}