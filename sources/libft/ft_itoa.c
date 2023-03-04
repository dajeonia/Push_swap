/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:42:05 by dajeon            #+#    #+#             */
/*   Updated: 2022/12/14 18:27:52 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_itoa(int n);
static void		ft_itoa_recur(char **c, int n);
static size_t	ft_digit_count(int n);

char	*ft_itoa(int n)
{
	char	*itoa;
	size_t	len;

	len = ft_digit_count(n);
	itoa = (char *)malloc(sizeof(char) * (len + 1 + (n < 0)));
	if (itoa == NULL)
		return (NULL);
	ft_itoa_recur(&itoa, n);
	*itoa = '\0';
	return (itoa - (len + (n < 0)));
}

static void	ft_itoa_recur(char **c, int n)
{
	int	sign;

	sign = 1;
	if (n < 0)
	{
		sign = -1;
		*(*c)++ = '-';
	}
	if (n / 10 != 0)
		ft_itoa_recur(c, sign * (n / 10));
	**c = sign * (n % 10) + '0';
	(*c)++;
}

static size_t	ft_digit_count(int n)
{
	size_t	count;

	count = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
