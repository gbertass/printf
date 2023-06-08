/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:20:48 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 17:28:44 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int     main(void)
{
	t_list  *l1 = malloc(sizeof(t_list));
	t_list  *l2 = malloc(sizeof(t_list));
	t_list  *l3 = malloc(sizeof(t_list));
	t_list  *begin;
	t_list	*lnew = malloc(sizeof(t_list));

	int     content = 10;
	int     a = 1;
	int     b = 2;
	int     c = 3;

	l1->content = (void *)&a;
	l2->content = (void *)&b;
	l3->content = (void *)&c;
	lnew->content = (void *)&content;
	l1->next = l2;
	l2->next = l3;
	l3->next = NULL;
	ft_lstadd_front(&l1, lnew);
	begin = l1;
	while (begin)
	{
			printf("%d\n", *(int *)begin->content);
			begin = begin->next;
	}
	// free(l1);
	// free(l2);
	// free(l3);
	free(lnew);
}*/