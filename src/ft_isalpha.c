/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:50:45 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/07 13:23:44 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

static int	isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalpha(int c)
{
	return (islower(c) || isupper(c));
}
