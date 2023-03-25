/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:26:03 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 19:27:13 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static void	ft_rotate(t_stack **head)
{
	if (*head)
		*head = (*head)->next;
//	else
//		ft_printf("ERROR: The Stack is Empty\n");
}

void	ra(t_stack **ab)
{
	ft_rotate(&ab[0]);
}

void	rb(t_stack **ab)
{
	ft_rotate(&ab[1]);
}
void	rr(t_stack **ab)
{
	ra(ab);
	rb(ab);
}
