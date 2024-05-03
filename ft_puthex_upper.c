/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:43:41 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/05/03 16:49:19 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_puthex_upper(long unsigned int n)
{
    size_t  len;

    len = 0;
    if (n >= 16)
        len += ft_puthex_upper(n / 16);
    if (n % 16 <= 9)
        len += ft_putchar(n % 16 + 48);
    else
        len += ft_putchar(n % 16 + 55);
    return (len); 
}