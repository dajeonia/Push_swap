/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  rrotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:55:02 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 19:27:19 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static void	ft_rrotate(t_stack **head)
{
	if (*head)
		*head = (*head)->prev;
//	else
//		ft_printf("ERROR: The Stack is Empty\n");
}

void	rra(t_stack **ab)
{
	ft_rrotate(&ab[0]);
}

void	rrb(t_stack **ab)
{
	ft_rrotate(&ab[1]);
}
void	rrr(t_stack **ab)
{
	rra(ab);
	rrb(ab);
}
