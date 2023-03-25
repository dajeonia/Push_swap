/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:55:02 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 19:03:10 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static void	ft_rotate(t_stack **head)
{
	if (*head)
		*head = (*head)->next;
	else
		ft_printf("ERROR: The Stack is Empty\n");
}

void	ra(t_stack **a, t_stack **b)
{
	b = a;
	ft_rotate(a);
}

void	rb(t_stack **a, t_stack **b)
{
	a = b;
	ft_rotate(b);
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a, b);
	rb(a, b);
}
