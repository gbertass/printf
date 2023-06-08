/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:43:36 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 17:38:08 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL)
	{
		while (lst != NULL)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

/*void	f(void *content)
{
	*(void**)content = NULL ;
}

int	main(void)
{
	t_list	*l1 = malloc(sizeof(t_list));
	t_list	*l2 = malloc(sizeof(t_list));
	t_list	*l3 = malloc(sizeof(t_list));
	t_list	*alpha;
	int	a = 1;
	int	b = 2;
	int	c = 3;

	l1->content = (void *)&a;
	l2->content = (void *)&b;
	l3->content = (void *)&c;
	l1->next = l2;
	l2->next = l3;
	l3->next = NULL;
	alpha = l1;
	ft_lstiter(l1, f);
	while (alpha)
	{
		printf("%d\n", *(int *)alpha->content);
		alpha = alpha->next;
	}
	free(l1);
}*/