/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:35:01 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 19:42:20 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "operation.h"

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

void	rra(t_stack **ab)
{
	ft_rrotate(&ab[0]);
}

void	rrb(t_stack **ab)
{
	ft_rrotate(&ab[1]);
}
