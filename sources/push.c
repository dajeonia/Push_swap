/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:39:44 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 19:21:54 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static void	ft_push_to(t_stack **from, t_stack **to)
{
	if (*from)
		ft_stpush(to, ft_stpop(from));
	else
		ft_printf("ERROR: The Stack is Empty\n");
}

void	pa(t_stack **ab)
{
	ft_push_to(&ab[1], &ab[0]);
}

void	pb(t_stack **ab)
{
	ft_push_to(&ab[0], &ab[1]);
}
