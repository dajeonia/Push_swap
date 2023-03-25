/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 08:24:13 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/25 13:54:17 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H

# include <stdlib.h>

typedef struct	s_stack
{
	void			*data;
	struct s_stack	*prev;
	struct s_stack	*next;
}				t_stack;

void	ft_stpush(t_stack **head, void *data);
void	*ft_stpop(t_stack **head);
void	ft_stclear(t_stack **head, void (*del)(void *));
void	ft_stiter(t_stack *head, void (*function)(t_stack *));
void	ft_stiter_rev(t_stack *head, void (*function)(t_stack *));

#endif
