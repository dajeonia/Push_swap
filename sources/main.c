/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:56:55 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 11:36:16 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

t_stack	*ft_parser(int argc, char **argv);

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = ft_parser(argc, argv);
	ft_printstack(a);
	ft_stpop(&a);
	ft_printf("다시\n");
	ft_printstack(a);
	return (0);
}

/*
void	pa(t_stack *a, t_stack *b)
{
	int	temp;

	temp = *(int *)(t_stack->node);
	
}
*/

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
			ft_stclear(&head);
			break ;
		}
	}
	return (head);
}
