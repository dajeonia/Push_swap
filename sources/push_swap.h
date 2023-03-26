/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:44:28 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 21:04:52 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# include <stdlib.h>

# include "stack.h"
# include "lib.h"

void	pa(t_stack **ab);
void	pb(t_stack **ab);

void	ra(t_stack **ab);
void	rb(t_stack **ab);
void	rr(t_stack **ab);

void	rra(t_stack **ab);
void	rrb(t_stack **ab);
void	rrr(t_stack **ab);

void	sa(t_stack **ab);
void	sb(t_stack **ab);
void	ss(t_stack **ab);

void	prnt(t_stack **ab);
void	oprnt(t_stack **ab, void (*f)(t_stack **));
void	init(t_stack **ab);

#endif
