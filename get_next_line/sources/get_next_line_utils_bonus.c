/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:23:13 by dajeon            #+#    #+#             */
/*   Updated: 2023/01/20 14:50:31 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static size_t	ft_strlen(const char *s1)
{
	int	len;

	len = 0;
	while (s1[len])
		len++;
	return (len);
}

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

t_info	*get_from_node(t_info **head, t_info *node, char **ret)
{
	char	*temp;

	if (node == NULL || node->stack == NULL)
		;
	else if (*(node->stack) == '\0')
		node = t_delete(head, node);
	else if (ft_find(node->stack, '\n', 0))
	{
		temp = node->stack;
		*ret = ft_substr(node->stack, 0, ft_find(node->stack, '\n', 0));
		if (*ret)
		{
			node->stack = ft_substr(node->stack,
					ft_find(node->stack, '\n', 0), -1);
			free(temp);
		}
		else
			node = t_delete(head, node);
	}
	else if (node->stack != NULL)
	{
		*ret = node->stack;
		node->stack = NULL;
	}
	return (node);
}

char	*ft_join(const char *s1, const char *s2, int len1, int len2)
{
	int		i;
	int		j;
	char	*join;

	join = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (join == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		join[i + j] = s2[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}

int	ft_find(const char *s1, int c, int flag)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i++] == (char)c)
			return (i);
	}
	if (flag)
		return (i);
	else
		return (0);
}
