/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:04:13 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/16 11:06:56 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char            *ft_strrchr(const char *str, int c)
{
    char    cc;
    char    *cstr;
    char    *last_occurency;

    cc = (char) c;
    cstr = (char *) str;
    last_occurency = 0;
    while (*cstr)
    {
        if (*cstr == cc)
            last_occurency = cstr;
        cstr++;
    }
    if (*cstr == cc)
        last_occurency = cstr;
    return (last_occurency);
}
