/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:56:55 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 19:22:40 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

t_stack	*ft_parser(int argc, char **argv);

int	main(int argc, char **argv)
{
	t_stack	*ab[2];
	int		i;

	ab[0] = ft_parser(argc, argv);
	ab[1] = NULL;
	i = 0;
	ft_printst_ab(ab);
	while (i++ < 5)
	{
		pb(ab);
		ft_printst_ab(ab);
	}
	pa(ab);
	ft_printst_ab(ab);
	return (0);
}

t_stack	*ft_parser(int argc, char **argv)
{
	t_stack	*head;
	int		*number;
	int		i;

	head = NULL;
	i = 1;
	while (i < argc)
	{
		number = (int *)malloc(sizeof(int));
		if (number != NULL)
		{
			*number = ft_atoi(argv[i]);
			ft_stpush(&head, number);
			i++;
		}
		else
		{
			ft_stclear(&head, free);
			break ;
		}
	}
	return (head);
}
