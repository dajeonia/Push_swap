/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 20:34:44 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 19:20:45 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static void	ft_printnode(t_stack *node)
{
	ft_printf("%d ", *(int *)(node->data));
}

void	ft_printstack(t_stack *head)
{
	if (head == NULL)
		ft_printf("The Stack is Empty!");
	else
		ft_stiter(head, ft_printnode);
	ft_printf("\n");
}

void	ft_printst_ab(t_stack **ab)
{
	ft_printf("[a]: ");
	ft_printstack(ab[0]);
	ft_printf("[b]: ");
	ft_printstack(ab[1]);
	ft_printf("--------------------\n");
}
