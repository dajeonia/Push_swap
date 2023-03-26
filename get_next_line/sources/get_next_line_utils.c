/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:23:19 by dajeon            #+#    #+#             */
/*   Updated: 2023/01/20 14:31:14 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_strlen(const char *s1);
static char		*ft_substr(char const *s, unsigned int start, size_t len);

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

char	*get_stack(char *stack, char **ret)
{
	char	*temp;

	if (stack == NULL)
		;
	else if (*stack == '\0')
	{
		free(stack);
		stack = NULL;
	}
	else if (ft_find(stack, '\n', 0))
	{
		temp = stack;
		*ret = ft_substr(stack, 0, ft_find(stack, '\n', 0));
		if (*ret)
			stack = ft_substr(stack, ft_find(stack, '\n', 0), -1);
		else
			stack = NULL;
		free(temp);
	}
	else if (stack != NULL)
	{
		*ret = stack;
		stack = NULL;
	}
	return (stack);
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

static size_t	ft_strlen(const char *s1)
{
	int	len;

	len = 0;
	while (s1[len])
		len++;
	return (len);
}
