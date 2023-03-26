/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:35:01 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/26 18:29:43 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

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
	ft_rotate(&ab[0]);
	ft_rotate(&ab[1]);
}

void	pa(t_stack **ab)
{
	ft_push_to(&ab[1], &ab[0]);
}

void	pb(t_stack **ab)
{
	ft_push_to(&ab[0], &ab[1]);
}
