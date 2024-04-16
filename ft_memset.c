/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 08:41:28 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/16 08:42:31 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *str, int c, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (i < n)
    {
        ((char *) str)[i] = c;
        i++;
    }
    
    return (str);
}