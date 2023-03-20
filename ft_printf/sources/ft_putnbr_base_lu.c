/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:55:03 by dajeon            #+#    #+#             */
/*   Updated: 2023/01/09 15:13:13 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(const char *s);
static int		ft_count(int count, int rtn);
static int		ft_putflag(int size);

int	ft_putnbr_base_lu(const unsigned long u, char *base, int flag)
{
	int	size;
	int	count;

	count = 0;
	size = ft_strlen(base);
	if (u / size != 0)
		count = ft_count(count, ft_putnbr_base_lu(u / size, base, flag));
	else if (flag)
		count = ft_count(count, ft_putflag(size));
	if (count != -1)
		count = ft_count(count, ft_putchar(base[u % size]));
	return (count);
}

static int	ft_putflag(int size)
{
	if (size == 8)
		return (ft_putchar('0'));
	else if (size == 16)
		return (ft_putstr("0x"));
	else
		return (-1);
}

static int	ft_count(int count, int ret)
{
	if (ret == -1 || count == -1)
		return (-1);
	else
		return (count + ret);
}

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
