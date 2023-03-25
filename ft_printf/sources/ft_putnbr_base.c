/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:56:58 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 13:47:56 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_count(int count, int ret);
static size_t	ft_strlen(const char *s);

int	ft_putnbr_base(const long n, char *base)
{
	int	size;
	int	sign;
	int	count;

	count = 0;
	size = ft_strlen(base);
	sign = 1 * (n >= 0) + -1 * (n < 0);
	if (n / size != 0)
		count = ft_count(count, ft_putnbr_base(n / size, base));
	else if (n < 0)
		count = ft_count(count, ft_putchar('-'));
	if (count != -1)
		count = ft_count(count, ft_putchar(base[ft_abs(n % size)]));
	return (count);
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
