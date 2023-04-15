/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:58:58 by dajeon            #+#    #+#             */
/*   Updated: 2023/04/15 20:31:33 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "lib.h"

void	ft_stprint(t_stack *head)
{
	if (head)
		ft_iterator(head, ft_ndprint, 1);
	else
		ft_printf("-");
	ft_printf("\n");
}

void	ft_opprint(t_stack **head, void (*f)(t_stack **))
{
	f(head);
	ft_stprint(*head);
}

void	ft_ndprint(t_stack *node)
{
	ft_printf("%d ", ft_stdata(node));
}

void	ft_iterator(t_stack *head, void (*f)(t_stack *), int flag)
{
	t_stack	*cur;

	cur = head;
	if (flag)
	{
		while (1)
		{
			f(cur);
			cur = cur->next;
			if (cur == head)
				break ;
		}
	}
	else
	{
		while (1)
		{
			f(cur);
			cur = cur->prev;
			if (cur == head)
				break ;
		}
	}
}
