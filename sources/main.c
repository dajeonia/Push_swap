/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:56:55 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/19 20:38:07 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include "stack.h"
# include "../libft/libft.h"

void	ft_printst(t_stack *node);

int	main(int argc, char **argv)
{
	int		i;
	t_stack	*head;
	int		*temp;

	i = 1;
	while (i < argc)
	{
		temp = (int *)malloc(sizeof(int));
		*temp = ft_atoi(argv[i]);
		if (i == 1)
		{
			head = ft_stnew(temp);
		}
		else
			ft_stpush(&head, temp);
		i++;
	}
	if (head == NULL)
		return 0;
	else
		ft_stiter(head, ft_printst);
}

void	ft_malloc(size_t a)
{
	int	*b;

	b = (int *)malloc(sizeof(a));
	*b = 5;
	ft_putnbr_fd(*b, 1)
}

void	ft_printst(t_stack *node)
{
	t_stack *hel;
	hel = node;
	ft_putnbr_fd(*(int *)(node->data), 1);
}
