/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:55:31 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/21 11:13:50 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_isupper(int c);

int		ft_islower(int c);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

char	*ft_strcpy(char *dst, const char *src);

char	*ft_strncpy(char *dst, const char *src, size_t len);

size_t	ft_strlcpy(char *dst, const char *src, size_t len);

char	*ft_strcat(char *dst, const char *src);

char	*ft_strncat(char *dst, const char *src, size_t len);

size_t	ft_strlcat(char *dst, const char *src, size_t len);

void	*ft_bzero(void *s, size_t len);

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memcpy(void *dst, const void *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len);

#endif
