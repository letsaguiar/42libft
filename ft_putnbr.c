/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:33:27 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/05/03 16:52:36 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "limits.h"
#include "libft.h"

size_t ft_putnbr(int n)
{
    size_t  len;

    len = 0;
    if (n == INT_MIN)
        return (ft_putstr("-2147483648"));
    if (n < 0)
    {
        len += ft_putchar("-");
        n *= -1;
    }
    if (n > 9)
        len += ft_putnbr(n / 10);
    len += ft_putchar((n % 10) + 48);
    return (len);
}