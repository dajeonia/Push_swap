/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:56:02 by dajeon            #+#    #+#             */
/*   Updated: 2023/02/24 15:53:44 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "queue.h"

t_queue	*quenew(void *content)
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

void	ft_queadd(t_queue **head, void *content)
{
	t_queue	*node;

	node = (t_queue *)malloc(sizeof(t_queue *));
	if (node)
	{
		node->content = content;
		node->prev = (*head)->prev;
		node->next = *head;
		(node->prev)->next = node;
		(node->next)->prev = node;
		*head = node;
	}
}

void	ft_quedelone(t_queue *node, void (*del)(void *))
{
	del(node->content);
	free(node);
}

void	ft_quepop(t_queue **head)
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
	quedelone(cur);
}
