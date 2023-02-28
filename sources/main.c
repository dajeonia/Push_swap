/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:56:55 by dajeon            #+#    #+#             */
/*   Updated: 2023/02/28 20:24:03 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include "queue.h"

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	test(void *a)
{
	printf("%d\n", *(int *)a);
}

/*
void	ft_iter(t_queue *head, void (*f)(void *))
{
	t_queue	*end;

	end = head;
	while (1)
	{
		printf("-----------------\n");
		printf("prev: ");
		f(head->prev->content);
		printf("cont: ");
		f(head->content);
		printf("next: ");
		f(head->next->content);
		head = head->next;
		if (head->next == end)
			break;
	}
}
*/
int	main(void)
{
	int a[15];
	int	i;
	t_queue *head;

	i = 0;
	printf("---------------------------------------\n");
	while (i < 15)
	{
		a[i] = (i + 5) * 16 + 2;
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 9)
	{
		if (i == 0)
			head = ft_quenew(&a[i]);
		else
			ft_queadd(&head, &a[i]);
		printf("---------------------------------------\n");
		printf("NODE   : %p\n", head);
		printf("cont(*): %p\n", (int *)(head->content));
		printf("content: %d\n", *(int *)(head->content));
		printf("prev   : %p\n", head->prev);
		printf("next   : %p\n", head->next);
		i++;
	}
	printf("---------------------------------------\n");
	printf("\n");
	return (0);
}
