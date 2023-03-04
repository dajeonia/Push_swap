/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:56:59 by dajeon            #+#    #+#             */
/*   Updated: 2022/12/14 18:29:16 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char		**ft_salloc(char const *s, char c, size_t pnum);
static size_t	ft_split_count(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	pnum;
	size_t	num;
	size_t	i;
	size_t	j;

	pnum = ft_split_count(s, c);
	split = ft_salloc(s, c, pnum);
	i = 0;
	num = 0;
	while (s[i] && split != NULL)
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
		{
			j = 0;
			while (s[i] != c && s[i] != '\0')
				split[num][j++] = s[i++];
			split[num++][j] = '\0';
		}
		else
			i++;
	}
	if (split != NULL)
		split[num] = NULL;
	return (split);
}

static size_t	ft_split_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_salloc(char const *s, char c, size_t pnum)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	**salloc;

	i = 0;
	j = 0;
	salloc = (char **)malloc(sizeof(char *) * (pnum + 1));
	while (s[i] && salloc != NULL)
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
		{
			len = 0;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
				len++;
			}
			salloc[j++] = (char *)malloc(sizeof(char) * (len + 1));
		}
		else
			i++;
	}
	return (salloc);
}
