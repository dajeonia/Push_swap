/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 08:24:13 by dajeon            #+#    #+#             */
/*   Updated: 2023/02/16 09:00:26 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef

#include <stdlib.h>
#include <unistd.h>

typedef struct s_stack
{
	void			*data;
	struct s_stack	*prev;
} t_stack;

t_stack	*ft_stacknew(void *data);
void	ft_stackclear(t_stack **head, void (*del)(void *));
void	ft_iter(t_stack *head, void (*f)(void *));
void	ft_pop(t_stack **head, void (*del)(void *));
void	ft_push(t_stack **head, void *data);

#endif
