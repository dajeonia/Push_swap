/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:23:56 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/26 19:55:10 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static size_t	ft_strlen(const char *s1)
{
	int	len;

	len = 0;
	while (s1[len])
		len++;
	return (len);
}

static t_info	*ft_read_on(t_info **head, t_info *node)
{
	int		red;
	char	*temp;
	char	buf[BUFFER_SIZE];

	red = 1;
	while (!ft_find(node->stack, '\n', 0) && red != -1 && red != 0)
	{
		red = read(node->fd, buf, BUFFER_SIZE);
		if (0 < red && red <= BUFFER_SIZE)
		{
			temp = ft_join(node->stack, buf, ft_strlen(node->stack), red);
			free(node->stack);
			node->stack = temp;
			if (node->stack == NULL)
			{
				t_delete(head, node);
				return (NULL);
			}
		}
	}
	if (red == -1)
		node = t_delete(head, node);
	return (node);
}

char	*get_next_line(int fd)
{
	static t_info	*head;
	t_info			*node;
	char			*ret;

	node = t_check(&head, fd);
	if (node == NULL)
		return (NULL);
	if (node->stack == NULL)
	{
		node->stack = (char *)malloc(sizeof(char) * 1);
		if (node->stack == NULL)
		{
			head = node->next;
			free(node);
			return (NULL);
		}
		*(node->stack) = '\0';
	}
	ret = NULL;
	node = ft_read_on(&head, node);
	node = get_from_node(&head, node, &ret);
	return (ret);
}

t_info	*t_check(t_info **head, int new_fd)
{
	t_info	*new_node;
	t_info	*current;

	current = *head;
	while (current)
	{
		if (current->fd == new_fd)
			return (current);
		current = current->next;
	}
	new_node = (t_info *)malloc(sizeof(t_info));
	if (new_node)
	{
		new_node->fd = new_fd;
		new_node->stack = NULL;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}

t_info	*t_delete(t_info **head, t_info *target)
{
	t_info	*cur;
	t_info	*prev;

	cur = *head;
	prev = NULL;
	if (target == NULL)
		return (NULL);
	while (cur && cur != target)
	{
		if (cur->next == target)
			prev = cur;
		cur = cur->next;
	}
	if (cur == target)
	{
		if (prev != NULL)
			prev->next = target->next;
		else
			*head = target->next;
		if (target->stack != NULL)
			free(target->stack);
		free(target);
	}
	return (NULL);
}
