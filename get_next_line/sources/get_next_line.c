/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 08:22:08 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/26 19:22:35 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_read_on(int fd, char *stack);
static size_t	ft_strlen(const char *s1);

char	*get_next_line(int fd)
{
	static char	*stack;
	char		*ret;

	if (stack == NULL)
	{
		stack = (char *)malloc(sizeof(char) * 1);
		if (stack == NULL)
			return (NULL);
		*stack = 0;
	}
	ret = NULL;
	stack = ft_read_on(fd, stack);
	stack = get_stack(stack, &ret);
	return (ret);
}

static size_t	ft_strlen(const char *s1)
{
	int	len;

	len = 0;
	while (s1[len])
		len++;
	return (len);
}

static char	*ft_read_on(int fd, char *stack)
{
	int		red;
	char	*temp;
	char	buf[BUFFER_SIZE];

	while (!ft_find(stack, '\n', 0))
	{
		red = read(fd, buf, BUFFER_SIZE);
		if (red == -1)
		{
			free(stack);
			return (NULL);
		}
		else if (red == 0)
			return (stack);
		else if (0 < red && red <= BUFFER_SIZE)
		{
			temp = ft_join(stack, buf, ft_strlen(stack), red);
			free(stack);
			stack = temp;
			if (stack == NULL)
				return (NULL);
		}
	}
	return (stack);
}
