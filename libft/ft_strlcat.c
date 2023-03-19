/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:08:37 by dajeon            #+#    #+#             */
/*   Updated: 2022/12/14 18:31:38 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	j;

	dstlen = ft_strlen(dst);
	if (dstsize != 0)
	{	
		j = 0;
		while (dstlen + j < dstsize - 1 && src[j])
		{
			dst[dstlen + j] = src[j];
			j++;
		}
		dst[dstlen + j] = '\0';
	}
	if (dstsize < dstlen)
		return (ft_strlen(src) + dstsize);
	else
		return (ft_strlen(src) + dstlen);
}
