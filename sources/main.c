/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:56:55 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/03 10:28:59 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include "stack.h"

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
void	ft_iter(t_stack *head, void (*f)(void *))
{
	t_stack	*end;

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
	t_stack *head;
	t_stack *cur;

	i = 0;
	printf("---------------------------------------\n");
	while (i < 15)
	{
		a[i] = (i + 5) * 16 + 2;
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
	printf("---------------------------------------\n");
	i = 0;
	while (i < 9)
	{
		if (i == 0)
			head = ft_stnew(&a[i]);
		else
			ft_stpush(&head, &a[i]);
		cur = head;
		i++;
	}
	ft_stiter(head, ft_stlist);
	return (0);
}
