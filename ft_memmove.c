/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 08:54:08 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/17 10:33:12 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
   char *cdest;
   char *csrc;
   
   cdest = (char *)dest;
   csrc = (char *)src;
   if(!dest && !src)
      return(0);
   if (dest <= src)
   {
      while(n--)
      {
        *cdest++ = *csrc++;
      }
   }
   else if (dest > src)
   {
      cdest += n - 1;
      csrc += n - 1;
      while(n--)
      {
         *cdest-- = *csrc--;
      }
   }
   return (dest);
}