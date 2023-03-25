/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:35:48 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 21:04:55 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "stack.h"

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
	rra(ab);
	rrb(ab);
}

