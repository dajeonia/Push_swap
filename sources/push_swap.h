/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:44:28 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 19:21:39 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H

# include <stdlib.h>
# include <unistd.h>

# include "../libft/libft.h"
# include "../ft_printf/sources/ft_printf.h"
# include "stack.h"

void	ft_printstack(t_stack *head);
void	ft_printst_ab(t_stack **ab);

void	pa(t_stack **ab);
void	pb(t_stack **ab);

void	ra(t_stack **a, t_stack **b);
void	rb(t_stack **a, t_stack **b);

#endif
