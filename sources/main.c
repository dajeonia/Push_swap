/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:56:55 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/26 20:52:25 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_convert(t_stack **ab, char *oper);
t_stack	*ft_parser(int argc, char **argv);

int	main(int argc, char **argv)
{
	t_stack	*ab[2];
	int		i;

	init(ab);
	i = 0;
	ab[0] = ft_parser(argc, argv);
	while (1)
		ft_convert(ab, get_next_line(0));
	return (0);
}

void	ft_convert(t_stack **ab, char *oper)
{
	if (!ft_strncmp(oper, "pa\n", 4))
		oprnt(ab, pa);
	else if (!ft_strncmp(oper, "ra\n", 4))
		oprnt(ab, ra);
	else if (!ft_strncmp(oper, "rra\n", 4))
		oprnt(ab, rra);
	else if (!ft_strncmp(oper, "rb\n", 4))
		oprnt(ab, rb);
	else if (!ft_strncmp(oper, "rrb\n", 4))
		oprnt(ab, rrb);
	else if (!ft_strncmp(oper, "rr\n", 4))
		oprnt(ab, rr);
	else if (!ft_strncmp(oper, "rrr\n", 4))
		oprnt(ab, rrr);
	else if (!ft_strncmp(oper, "pb\n", 4))
		oprnt(ab, pb);
	else if (!ft_strncmp(oper, "sa\n", 4))
		oprnt(ab, sa);
	else if (!ft_strncmp(oper, "sb\n", 4))
		oprnt(ab, sb);
	else if (!ft_strncmp(oper, "ss\n", 4))
		oprnt(ab, ss);
	else
		ft_printf("ERROR\n");
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
