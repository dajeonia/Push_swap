/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:00:59 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 20:23:22 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "stack.h"
# include "lib.h"

static void	ft_print_node(t_stack *node);

void	ft_stackprint(t_stack *head)
{
	if (head)
		ft_iterator(head, ft_print_node, 1);
	else
		ft_printf("The Stack is Empty!");
	ft_printf("\n");
}

static void	ft_print_node(t_stack *node)
{
	ft_printf("%d ", *(int *)(node->data));
}
