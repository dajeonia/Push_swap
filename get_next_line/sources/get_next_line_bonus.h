/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:23:07 by dajeon            #+#    #+#             */
/*   Updated: 2023/01/20 14:49:26 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_info{
	int				fd;
	char			*stack;
	struct s_info	*next;
}					t_info;

char	*get_next_line(int fd);
t_info	*t_delete(t_info **head, t_info *target);
t_info	*t_check(t_info **head, int new_fd);

t_info	*get_from_node(t_info **head, t_info *node, char **ret);
int		ft_find(const char *s1, int c, int flag);
char	*ft_join(const char *s1, const char *s2, int len1, int len2);

#endif
