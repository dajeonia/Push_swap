/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_find.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 19:54:26 by dajeon            #+#    #+#             */
/*   Updated: 2023/04/15 20:49:48 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdlib.h>

size_t	ft_stsize(t_stack *head)
{
	t_stack	*cur;
	size_t	len;

	cur = head;
	len = 0;
	while (1)
	{
		len++;
		cur = cur->next;
		if (cur == head)
			break ;
	}
	return (len);
}

size_t	ft_stfind(t_stack *head, int data)
{
	t_stack	*cur;
	size_t	i;

	cur = head;
	i = 0;
	while (1)
	{
		if (ft_stdata(cur) == data)
			return (i);
		cur = cur->next;
		if (cur == head)
			break ;
		i++;
	}
	return (-1);
}

int	ft_stack(t_stack *head, size_t index)
{
	t_stack	*cur;
	size_t	i;

	i = 0;
	cur = head;
	while (1)
	{
		if (i == index)
			return (ft_stdata(cur));
		cur = cur->next;
		if (cur == head)
			break ;
		i++;
	}
	return (0);
}
