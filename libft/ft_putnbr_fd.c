/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:45:15 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/19 20:33:43 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_abs(int n);

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n / 10 != 0)
		ft_putnbr_fd(n / 10, fd);
	else if (n < 0)
		write(fd, "-", 1);
	c = ft_abs(n % 10) + '0';
	write(fd, &c, 1);
}

static int	ft_abs(int n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}
