/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:56:55 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 21:06:46 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"
# include "lib.h"

t_stack	*ft_parser(int argc, char **argv);

int	main(int argc, char **argv)
{
	t_stack	*ab[2];

	init(ab);
	ab[0] = ft_parser(argc, argv);
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
			ft_push(&head, number);
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
