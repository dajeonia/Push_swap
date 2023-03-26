/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:56:02 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/26 18:31:14 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

static t_stack	*ft_stnew(void *data)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (node)
	{
		node->data = data;
		node->prev = node;
		node->next = node;
	}
	return (node);
}

void	ft_push(t_stack **head, void *data)
{
	t_stack	*node;

	node = ft_stnew(data);
	if (node)
	{
		if (*head == NULL)
			*head = node;
		else
		{
			node->prev = (*head)->prev;
			node->next = *head;
			(node->prev)->next = node;
			(node->next)->prev = node;
			*head = node;
		}
	}
}

void	*ft_pop(t_stack **head)
{
	t_stack	*cur;
	void	*pop;

	cur = *head;
	if (cur != NULL)
	{
		(cur->next)->prev = cur->prev;
		(cur->prev)->next = cur->next;
		if (cur == cur->next)
			*head = NULL;
		else
			*head = cur->next;
		pop = cur->data;
		free(cur);
	}
	else
		pop = NULL;
	return (pop);
}

void	ft_stclear(t_stack **head, void (*del)(void *))
{
	while (*head != NULL)
		del(ft_pop(head));
}
