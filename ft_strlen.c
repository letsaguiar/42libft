/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 08:38:45 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/16 08:39:35 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlen(const char *str)
{
    unsigned int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}