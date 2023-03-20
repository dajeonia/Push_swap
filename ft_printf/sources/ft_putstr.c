/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:59:39 by dajeon            #+#    #+#             */
/*   Updated: 2023/01/09 14:20:38 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	int	count;
	int	temp;

	if (s == NULL)
		return (ft_putstr("(null)"));
	count = 0;
	while (*s)
	{
		temp = ft_putchar(*(s++));
		if (temp == -1)
			return (-1);
		count += temp;
	}
	return (count);
}
