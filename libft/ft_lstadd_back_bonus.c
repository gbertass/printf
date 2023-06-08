/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:16:34 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 17:28:13 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_add;

	if (lst != NULL && new != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			lst_add = ft_lstlast(*lst);
			lst_add->next = new;
		}
	}
}

/*int     main(void)
{
        t_list  *l1 = malloc(sizeof(t_list));
        t_list  *l2 = malloc(sizeof(t_list));
        t_list  *l3 = malloc(sizeof(t_list));
        t_list  *begin;
        t_list  *lnew = malloc(sizeof(t_list));

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
        ft_lstadd_back(&l1, lnew);
        begin = l1;
        while (begin != NULL)
        {
                printf("%d\n", *(int *)begin->content);
               	begin = begin->next;
        }
       // free(l1);
       // free(l2);
       // free(l3);
        free(l1);
}*/