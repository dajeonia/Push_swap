/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:06:49 by dajeon            #+#    #+#             */
/*   Updated: 2023/04/15 20:54:54 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H

# include <stdlib.h>

typedef struct s_stack
{
	void			*data;
	struct s_stack	*prev;
	struct s_stack	*next;
}					t_stack;

void	ft_push(t_stack **head, void *data);
void	*ft_pop(t_stack **head);
void	ft_stclear(t_stack **head, void (*del)(void *));
int		ft_stdata(t_stack *node);

void	ft_swap(t_stack **head);
void	ft_rotate(t_stack **head);
void	ft_rrotate(t_stack **head);
void	ft_push_to(t_stack **from, t_stack **to);

void	ft_ndprint(t_stack *node);
void	ft_stprint(t_stack *head);
void	ft_opprint(t_stack **head, void (*f)(t_stack **));
void	ft_iterator(t_stack *head, void (*f)(t_stack *), int flag);

int		ft_stack(t_stack *head, size_t index);
size_t	ft_stsize(t_stack *head);
size_t	ft_stfind(t_stack *head, int data);

#endif
