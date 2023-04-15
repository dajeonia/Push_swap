/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:35:48 by dajeon            #+#    #+#             */
/*   Updated: 2023/04/15 20:07:41 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "lib.h"

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
	ft_rrotate(&ab[0]);
	ft_rrotate(&ab[1]);
}

void	prnt(t_stack **ab)
{
	ft_printf("A: ");
	ft_stprint(ab[0]);
	ft_printf("B: ");
	ft_stprint(ab[1]);
}

void	oprnt(t_stack **ab, void (*f)(t_stack **))
{
	f(ab);
	prnt(ab);
}
