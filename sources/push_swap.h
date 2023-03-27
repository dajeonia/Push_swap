/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:44:28 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/27 15:34:10 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# include "stack.h"
# include "lib.h"

void	init(t_stack **ab);
void	prnt(t_stack **ab);
void	oprnt(t_stack **ab, void (*f)(t_stack **));

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

void	ft_tester(t_stack **ab);
void	ft_convert(t_stack **ab, char *oper);
t_stack	*ft_parser(int argc, char **argv);

#endif
