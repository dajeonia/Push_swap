/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:56:02 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 11:59:26 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "stack.h"

t_stack	*ft_stnew(void *data)
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

void	ft_stpush(t_stack **head, void *data)
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

void	ft_stiter(t_stack *head, void (*function)(t_stack *))
{
	t_stack *cur;
	int		i;

	cur = head;
	i = 0;
	while (1)
	{
		function(cur);
		cur = cur->next;
		if (cur == head)
			break ;
	}
}

void	*ft_stpop(t_stack **head)
{
	t_stack	*cur;
	void	*pop;

	cur = *head;
	if (cur == cur->next)
		*head = NULL;
	else
	{
		(cur->next)->prev = cur->prev;
		(cur->prev)->next = cur->next;
		*head = cur->next;
	}
	pop = cur->data;
	free(cur);
	return (pop);
}

void	ft_stclear(t_stack **head)
{
	while (*head != NULL)
		free(ft_stpop(head));
}
