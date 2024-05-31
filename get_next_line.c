/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:00:44 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/30 12:14:05 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *read_from_file(int fd)
{
    char    *buffer;
    size_t   bytes_read;

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
        return (NULL);
    buffer = (char *) ft_calloc(BUFFER_SIZE + 1, sizeof (char));
    bytes_read = read(fd, buffer, BUFFER_SIZE);
    if (bytes_read <= 0)
    {
        free(buffer);
        return (NULL);    
    }
    return (buffer);
}

char  *append_to_left(char *left, char *buffer)
{
  char  *ptr;

  if (left)
  {
    ptr = ft_strjoin(left, buffer);
    free(left);
    free(buffer);
  }
  else
  {
    ptr = ft_strdup(buffer);
    free(buffer);
  }

  return (ptr);
}

char  *remove_from_left(char *left)
{
  char  *ptr;

  if (!left)
    return (NULL);
  if (ft_strchr(left, '\n'))
    ptr = ft_strdup(ft_strchr(left, '\n') + 1);
  else
   ptr = NULL;
  free(left);

  return (ptr);
}

char  *extract_line(char *left)
{
  char  *ptr;

  if (!left)
    return (NULL);
  if (ft_strchr(left, '\n'))
    ptr = ft_substr(left, 0, ft_strchr(left, '\n') - left + 1);
  else
    ptr = ft_strdup(left);

  return (ptr);
}

char    *get_next_line(int fd)
{
  char        *buffer;
  char        *line;
  static char *left;
    
  while (1)
  {
    buffer = read_from_file(fd);
    if (!buffer)
      break;
    left = append_to_left(left, buffer);
    if (ft_strchr(left, '\n'))
      break;
  }
  line = extract_line(left);
  left = remove_from_left(left);

  return (line);
}
