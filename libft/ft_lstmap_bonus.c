/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:06:54 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 17:41:11 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	new_lst = NULL;
	new_node = NULL;
	if (lst != NULL)
	{
		while (lst != NULL)
		{
			new_node = ft_lstnew(f(lst->content));
			if (!new_node)
			{
				ft_lstclear(&new_lst, del);
				return (NULL);
			}
			ft_lstadd_back(&new_lst, new_node);
			lst = lst->next;
		}
	}
	return (new_lst);
}

/*void	del(void *content)
{
	free(content);
}

void	*f(void *content)
{
	int	*new = malloc(sizeof(int));
	*new = *(int *)content * 2;
	return (void *)new;
}

int	main(void)
{
	t_list	*l1 = malloc(sizeof(t_list));
	t_list	*l2 = malloc(sizeof(t_list));
	t_list	*l3 = malloc(sizeof(t_list));
	t_list	*new_list;
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
	new_list = ft_lstmap(l1, f, del);
	alpha = new_list;
	while (alpha)
	{
		printf("%d\n", *(int *)alpha->content);
		alpha = alpha->next;
	}
	free(l1);
}*/