/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:43:04 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/26 18:29:20 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_push_to(t_stack **from, t_stack **to)
{
	if (*from)
		ft_push(to, ft_pop(from));
}

void	ft_rotate(t_stack **head)
{
	if (*head)
		*head = (*head)->next;
}

void	ft_rrotate(t_stack **head)
{
	if (*head)
		*head = (*head)->prev;
}

void	ft_swap(t_stack **head)
{
	t_stack	*c;

	c = NULL;
	if (*head)
	{
		ft_push_to(head, &c);
		ft_rotate(head);
		ft_push_to(&c, head);
		ft_rrotate(head);
	}
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
