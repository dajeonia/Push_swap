/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:36:37 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/04 10:57:37 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	n;
	int	sign;

	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	n = 0;
	while ('0' <= *nptr && *nptr <= '9')
		n = n * 10 + (*(nptr++) - '0');
	return (sign * n);
}

static int ft_isspace(int c)
{
	if (c == 32)
		return (1);
	else if (9 <= c && c <= 13)
		return (1);
	else
		return (0);
}
