/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 08:24:13 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/04 14:59:20 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_stack
{
	void			*data;
	struct s_stack	*prev;
	struct s_stack	*next;
}				t_stack;

t_stack	*ft_stnew(void *data);
void	ft_stpush(t_stack **head, void *data);
void	*ft_stpop(t_stack **head);
void	ft_stiter(t_stack *head, void (*function)(t_stack *));

#endif
