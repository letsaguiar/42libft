/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:58:09 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/16 15:13:25 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_atoi(const char *str)
{
    int sign;
    int result;

    while (ft_isspace(*str))
        str++;
    sign = 1;
    if (*str == '+')
        str++;
    else if (*str == '-')
    {
        sign = -1;
        str++;
    }
    result = 0;
    while (ft_isdigit(*str))
    {
        result = result * 10 + *str - 48;
        str++;
    }
    result *= sign;
    return (result);
}
