/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:36:19 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/26 18:29:09 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	sa(t_stack **ab)
{
	ft_swap(&ab[0]);
}

void	sb(t_stack **ab)
{
	ft_swap(&ab[1]);
}

void	ss(t_stack **ab)
{
	ft_swap(&ab[0]);
	ft_swap(&ab[1]);
}

void	init(t_stack **ab)
{
	ab[0] = NULL;
	ab[1] = NULL;
}
