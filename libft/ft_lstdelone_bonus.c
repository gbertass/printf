/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:34:21 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 17:36:00 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL)
	{
		del(lst->content);
		free(lst);
		lst = NULL;
	}
}

/*void	del(void *content)
{
	content = NULL;
}

int   main(void)
{
        t_list  *l1 = malloc(sizeof(t_list));
        t_list  *l2 = malloc(sizeof(t_list));
        t_list  *l3 = malloc(sizeof(t_list));
        t_list  *begin;
       
        char    *a = "10";
        char    *b = "20";
        char  	*c = "30";
        l1->content = a;
        l2->content = b;
        l3->content = c;
        l1->next = l2;
        l2->next = l3;
        l3->next = NULL;
        begin = l1;
        ft_lstdelone(l3, del);
	while (begin->next)
	{
        	printf("%s\n", (char *)begin->content);
		begin = begin->next;
	}
        free(l1);
	free(l2);
}*/