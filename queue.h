/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 08:24:13 by dajeon            #+#    #+#             */
/*   Updated: 2023/02/24 11:57:15 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_queue
{
	void			*content;
	struct s_cque	*prev;
	struct s_cque	*next;
}				t_queue;

#endif
