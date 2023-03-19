/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:15:54 by dajeon            #+#    #+#             */
/*   Updated: 2022/12/05 20:23:36 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*buffer_char;
	size_t			i;

	buffer_char = b;
	i = 0;
	while (i < len)
		buffer_char[i++] = (unsigned char)c;
	return (buffer_char);
}
