/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 13:09:47 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/04 14:40:51 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_stlist_int(t_stack *node)
{
	static int	i=1;

	printf("NODE   : %p\n", node);
	printf("PREV   : %p\n", node->prev);
	printf("NEXT   : %p\n", node->next);
	printf("DATA   : %d\n", *(int *)(node->data));
	printf("*DATA  : %p\n", &(node->data));
	i++;
}

void	get(int *a, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		a[i] = i * 5;
		i++;
	}
}

void	push(t_stack **head, int *a, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		ft_stpush(head, &a[i]);
		i++;
	}
}


