/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:29:27 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/16 11:36:31 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int             ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
    unsigned int    i;
    unsigned char   *cs1;
    unsigned char   *cs2;

    
    i = 0;
    cs1 = (unsigned char *) s1;
    cs2 = (unsigned char *) s2;
    while(i < n)
    {
        if (cs1[i] != cs2[i])
            return (cs1[i] - cs2[i]);
        i++;
    }
    return (0);
}
