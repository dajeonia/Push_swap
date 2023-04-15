/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:56:55 by dajeon            #+#    #+#             */
/*   Updated: 2023/04/15 20:53:25 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*ab[2];
	int		i;

	init(ab);
	i = 0;
	ab[0] = ft_parser(argc, argv);

	ft_printf("%d\n", ft_stfind(ab[0], 9)); 

	//ft_tester(ab);
	return (0);
}

