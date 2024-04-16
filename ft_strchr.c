/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:35:35 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/16 10:44:35 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char            *ft_strchr(const char *str, int c)
{
    char    cc;
    char    *cstr;

    cc = (char) c;
    cstr = (char *) str;
    while (*cstr)
    {
        if (*cstr == cc)
            return (cstr);
        cstr++;
    }
    if (*cstr == cc)
        return (cstr);
    else
        return (0);
}