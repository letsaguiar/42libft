/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:55:31 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/07 20:17:15 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

void			ft_bzero(void *s, unsigned int n);

void			ft_memset(void *s, int c, unsigned int n);

void			ft_memcpy(void *dest, void *src, unsigned int n);

void			ft_memmove(void *dest, void *src, unsigned int n);

unsigned int	ft_strlen(char *str);

#endif
