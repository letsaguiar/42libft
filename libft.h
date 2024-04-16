/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:55:31 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/16 11:29:16 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int             ft_islower(int c);

int             ft_isupper(int c);

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

unsigned int    ft_strlen(const char *str);

unsigned int    ft_strlcpy(char *dest, const char *src, unsigned int n);

unsigned int    ft_strlcat(char *dest, const char *src, unsigned int n);

char            *ft_strchr(const char *str, int c);

char            *ft_strrchr(const char *str, int c);

int             ft_strncmp(const char *s1, const char *s2, unsigned int n);

void            ft_bzero(void *str, unsigned int n);

void            *ft_memset(void *str, int c, unsigned int n);

void            *ft_memcpy(void *dest, const void *src, unsigned int n);

void            *ft_memmove(void *dest, const void *src, unsigned int n);

void            *ft_memchr(void *str, int c, unsigned int n);

int             ft_memcmp(const void *s1, const void *s2, unsigned int n);

int             ft_toupper(int c);

int             ft_tolower(int c);

#endif
