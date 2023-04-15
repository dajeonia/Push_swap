/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:43:04 by dajeon            #+#    #+#             */
/*   Updated: 2023/04/15 19:44:45 by dajeon           ###   ########.fr       */
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
