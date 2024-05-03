/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:51:31 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/05/03 16:48:34 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_puthex_lower(long unsigned int n)
{
    size_t  len;

    len = 0;
    if (n >= 16)
        len += ft_puthex_lower(n / 16);
    if (n % 16 <= 9)
        len += ft_putchar(n % 16 + 48);
    else
        len += ft_putchar(n % 16 + 87);
    return (len);
}