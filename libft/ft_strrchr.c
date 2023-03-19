/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 22:01:20 by dajeon            #+#    #+#             */
/*   Updated: 2022/12/14 18:32:42 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c_char;
	size_t	i;
	size_t	len;

	c_char = c;
	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[len - i] == c_char)
			return ((char *)(s + (len - i)));
		i++;
	}
	return (NULL);
}
