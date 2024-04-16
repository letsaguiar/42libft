/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:14:34 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/16 11:25:11 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void            *ft_memchr(void *str, int c, unsigned int n)
{
    unsigned int    i;
    char            cc;
    char            *cstr;
    
    i = 0;
    cc = (char) c;
    cstr = (char *) str;
    while (i < n && cstr[i] != cc)
        i++;
    if (cstr[i] == cc && n > 0)
        return (&cstr[i]);
    else
        return (0);
}
