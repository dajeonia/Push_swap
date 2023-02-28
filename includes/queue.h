/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 08:24:13 by dajeon            #+#    #+#             */
/*   Updated: 2023/02/28 19:35:01 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_queue
{
	void			*content;
	struct s_queue	*prev;
	struct s_queue	*next;
}				t_queue;

t_queue	*ft_quenew(void *content);
void	ft_queadd(t_queue **head, void *content);
void	ft_quedelone(t_queue *node, void (*del)(void *));
void	ft_quepop(t_queue **head, void (*del)(void *));

#endif
