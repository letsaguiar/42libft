/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:37:54 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/05/03 16:53:36 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_putunbr(unsigned int n)
{
    size_t  len;

    len = 0;
    if (n > 9)
        len += ft_putunbr(n / 10);
    len += ft_putchar((n % 10) + 48);
    return (len);
}