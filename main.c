/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:56:55 by dajeon            #+#    #+#             */
/*   Updated: 2023/02/24 14:40:44 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_iter(void *arr, void *(*f)(void *))
{
	return (f(arr));
}

int	main(void)
{
	char	*hello[5] = {"hello", "my", "name", "is", "dajeon"};
	int			i;
	long	j;

	i = 0;
	j = (long)*hello;

	ft_iter(hello, ft_strlen((void *)hello));
	return (0);
}

	
