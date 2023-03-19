/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:52:23 by dajeon            #+#    #+#             */
/*   Updated: 2022/12/14 18:47:09 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*cur;

	if (!lst || !f || !del)
		return (NULL);
	map = ft_lstnew(f(lst->content));
	if (map == NULL)
		return (NULL);
	cur = map;
	lst = lst->next;
	while (lst)
	{
		cur->next = ft_lstnew(f(lst->content));
		if (cur->next)
		{
			cur = cur->next;
			lst = lst->next;
		}
		else
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
	}
	return (map);
}
