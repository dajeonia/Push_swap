/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:56:02 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/04 10:58:14 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "stack.h"

t_stack	*ft_stnew(void *content)
{
	t_stack	*node;
	
	node = (t_stack *)malloc(sizeof(t_stack *));
	if (node)
	{
		node->content = content;
		node->prev = node;
		node->next = node;
	}
	return (node);
}

#include <stdio.h>
void	ft_stlist(t_stack *node)
{
	static int	i;

	printf("NODE[%d]-------------------------------\n", i);
	printf("NODE   : %p\n", node);
	printf("PREV   : %p\n", node->prev);
	printf("NEXT   : %p\n", node->next);
	printf("CONTENT: %d\n", *(int *)(node->content));
	printf("CONT(P): %p\n", node->content);
	i++;
}

void	ft_stpush(t_stack **head, void *content)
{
	t_stack	*node;
	t_stack	*h;

	h = *head;
	node = (t_stack *)malloc(sizeof(t_stack *));
	if (node)
	{
		node->content = content;
		node->prev = h->prev;
		node->next = h;
		(node->prev)->next = node;
		(node->next)->prev = node;
		*head = node;
	}
}

void	ft_stpop(t_stack **head, void (*del)(void *))
{
	t_stack	*cur;

	cur = *head;
	if (cur == cur->next)
		*head = NULL;
	else
	{
		(cur->next)->prev = cur->prev;
		(cur->prev)->next = cur->next;
		*head = cur->next;
	}
	del(cur->content);
	free(cur);
}

void	ft_stiter(t_stack *head, void (*function)(t_stack *))
{
	t_stack *cur;

	cur = head;
	while (1)
	{
		function(cur);
		cur = cur->next;
		if (cur == head)
			break;
	}
}
