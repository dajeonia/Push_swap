/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:57:11 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 13:47:37 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

static int	ft_convert(const char type, va_list ap);

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		temp;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			temp = ft_convert(*(++format), ap);
		else
			temp = write(1, format, 1);
		if (temp == -1)
		{
			count = -1;
			break ;
		}
		count += temp;
		format++;
	}
	va_end(ap);
	return (count);
}

static int	ft_convert(const char type, va_list ap)
{
	if (type == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (type == 'p')
		return (ft_putnbr_base_lu(va_arg(ap, unsigned long), HEXA, 1));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr_base(va_arg(ap, int), DECIMAL));
	else if (type == 'u')
		return (ft_putnbr_base_u(va_arg(ap, int), DECIMAL, 0));
	else if (type == 'x')
		return (ft_putnbr_base_u(va_arg(ap, int), HEXA, 0));
	else if (type == 'X')
		return (ft_putnbr_base_u(va_arg(ap, int), CAP_HEXA, 0));
	else if (type == '%')
		return (write(1, "%", 1));
	else
		return (-1);
}
