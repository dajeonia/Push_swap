/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 20:34:44 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 12:00:50 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static void	ft_printnode(t_stack *node)
{
	ft_printf("%d\n", *(int *)(node->data));
}

void	ft_printstack(t_stack *head)
{
	if (head == NULL)
		ft_printf("The Stack is Empty!\n");
	else
		ft_stiter(head, ft_printnode);
}
