/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:53:08 by dajeon            #+#    #+#             */
/*   Updated: 2023/04/15 19:39:12 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_tester(t_stack **ab)
{
	while (1)
		ft_convert(ab, get_next_line(0));
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
