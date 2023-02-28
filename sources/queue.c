/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:56:02 by dajeon            #+#    #+#             */
/*   Updated: 2023/02/28 20:24:02 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "queue.h"

t_queue	*ft_quenew(void *content)
{
	t_queue	*node;
	
	node = (t_queue *)malloc(sizeof(t_queue *));
	if (node)
	{
		node->content = content;
		node->prev = node;
		node->next = node;
	}
	return (node);
}

#include <stdio.h>
/*
void	ft_test(t_queue *node, t_queue *head)
{
	static int	i;

	printf("NODE[%d]-------------------------------\n", i);
	printf("node         : %p\n", node);
	printf("node->content: %d\n", *(int *)(node->content));
	printf("node->pointer: %p\n", node->content);
	printf("node->prev   : %p\n", node->prev);
	printf("node->next   : %p\n", node->next);
	printf("HEAD[%d]-------------------------------\n", i);
	printf("head         : %p\n", head);
	printf("head->content: %d\n", *(int *)(head->content));
	printf("head->pointer: %p\n", head->content);
	printf("head->prev   : %p\n", head->prev);
	printf("head->next   : %p\n", head->next);
	printf("=======================================\n");
	i++;
}
*/

void	ft_queadd(t_queue **head, void *content)
{
	t_queue	*node;
	int		i;

	i = *(int *)content;
	node = (t_queue *)malloc(sizeof(t_queue *));
	if (node)
	{
		node->content = content;
		node->prev = (*head)->prev;
		node->next = *head;
		(node->prev)->next = node; // <--- 이 부분에서 걸림
		(node->next)->prev = node;
		*head = node;
		i = *(int *)content;
	}
}

void	ft_quedelone(t_queue *node, void (*del)(void *))
{
	del(node->content);
	free(node);
}

void	ft_quepop(t_queue **head, void (*del)(void *))
{
	t_queue	*cur;

	cur = *head;
	if (cur == cur->next)
		*head = NULL;
	else
	{
		(cur->next)->prev = cur->prev;
		(cur->prev)->next = cur->next;
		*head = cur->next;
	}
	ft_quedelone(cur, del);
}
