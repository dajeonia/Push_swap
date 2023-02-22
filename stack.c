/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:56:02 by dajeon            #+#    #+#             */
/*   Updated: 2023/02/17 11:43:22 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*ft_stacknew(void *data)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (node)
	{
		node->data = data;
		node->prev = NULL;
	}
	return (node);
}
/*

void	ft_stackclear(t_stack **head, void (*del)(void *))
{
	t_stack	*temp;

	while (*head)
	{
		temp = (*head)->prev;
		ft_pop(*head, del);
		*head = temp;
	}
}

void	ft_pop(t_stack **head, void (*del)(void *))
{
	t_stack	*temp;

	temp = (*head)->prev;
	del(*head);
	*head = temp;
}

void	ft_push(t_stack **head, void *data) {
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (node)
	{
		node->data = data;
		node->prev = *head;
		*head = node;
	}
}

void	ft_iter(t_stack *head, void (*f)(void *))
{
	while (head)
	{
		f(head->data);
		head = head->prev;
	}
}

static int	ft_abs(int n);
void	ft_putnbr(int n);

int	main(void)
{
	int	i;
	t_stack	*a;
	i = 0;

	while (i < 56)
	{
		ft_push(&a,(void *)(i % 7));
		i++;
	}
	ft_iter(a, ft_putnbr);
}


void	ft_putnbr(int n)
{
	char	c;

	if (n / 10 != 0)
		ft_putnbr(n / 10);
	else if (n < 0)
		write(1, "-", 1);
	c = ft_abs(n % 10) + '0';
	write(1, &c, 1);
}

static int	ft_abs(int n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}
*/
