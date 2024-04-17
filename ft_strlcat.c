/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:07:19 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/17 10:30:07 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t  dest_len;
    size_t  src_len;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if (dest_len >= n)
        return (n + src_len);
    if (dest_len + src_len + 1 < n)
        ft_memcpy(dest + dest_len, src, src_len + 1);
    else if (n > 0)
    {
        ft_memcpy(dest + dest_len, src, n - 1);
        dest[n - 1] = 0;
    }
    return (dest_len + src_len);
}