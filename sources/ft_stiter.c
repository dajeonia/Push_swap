/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stiter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:49:54 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 17:38:30 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "stack.h"

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

void	ft_stiter_rev(t_stack *head, void (*function)(t_stack *))
{
	t_stack *cur;
	int		i;

	cur = head->prev;
	i = 0;
	while (1)
	{
		function(cur);
		cur = cur->prev;
		if (cur == head)
			break ;
	}
}
