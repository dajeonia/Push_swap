/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:56:55 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 11:59:58 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

t_stack	*ft_parser(int argc, char **argv);

void	pa(t_stack **a, t_stack **b)
{
	ft_stpush(b, ft_stpop(a));
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = ft_parser(argc, argv);
	b = ft_parser(argc, argv);
	ft_printf("[a]\n");
	ft_printstack(a);
	ft_printf("----------------------------------------\n");
	ft_printf("[b]\n");
	ft_printstack(b);
	ft_printf("----------------------------------------\n");
	pa(&a, &b);
	ft_printf("다시\n");
	ft_printf("[a]\n");
	ft_printstack(a);
	ft_printf("----------------------------------------\n");
	ft_printf("[b]\n");
	ft_printstack(b);
	ft_printf("----------------------------------------\n");
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
			ft_stclear(&head);
			break ;
		}
	}
	return (head);
}
