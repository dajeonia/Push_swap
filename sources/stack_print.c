/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:58:58 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/27 15:06:36 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "lib.h"

static void	ft_print_node(t_stack *node);

void	ft_operprint(t_stack **head, void (*f)(t_stack **))
{
	f(head);
	ft_stackprint(*head);
}

void	ft_stackprint(t_stack *head)
{
	if (head)
		ft_iterator(head, ft_print_node, 1);
	else
		ft_printf("-");
	ft_printf("\n");
}

static void	ft_print_node(t_stack *node)
{
	ft_printf("%d ", *(int *)(node->data));
}
