/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:11:57 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 17:39:46 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int   main(void)
{
	t_list  *l1 = malloc(sizeof(t_list));
	t_list  *l2 = malloc(sizeof(t_list));
	t_list  *l3 = malloc(sizeof(t_list));
	t_list  *alpha;
	t_list	*last;

    char	*a;
	char	*b;
	char	*c;
   	a = "10";
	b = "20";
	c = "30";
   	l1->content = a;
	l2->content = b;
	l3->content = c;
	l1->next = l2;
	l2->next = l3;
	l3->next = NULL;
	alpha = l1;
	last = ft_lstlast(l1);
	printf("%s\n", (char *)last->content);
	free(l1);
}*/