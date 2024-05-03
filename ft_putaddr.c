/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:05:13 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/24 20:26:55by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_putaddr(void *ptr)
{
    if (ptr == NULL)
        return (ft_putstr("(nil)"));
    return (ft_putstr("0x") + ft_puthex_lower((size_t) ptr));
}