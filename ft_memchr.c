/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:14:34 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/17 10:25:51 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(void *str, int c, size_t n)
{
    size_t          i;
    unsigned char   cc;
    unsigned char   *cstr;
    
    i = 0;
    cc = (unsigned char) c;
    cstr = (unsigned char *) str;
    while (i < n && cstr[i] != cc)
        i++;
    if (cstr[i] == cc && n > 0)
        return (cstr + i);
    else
        return (0);
}
