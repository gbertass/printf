/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:14:27 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:20:19 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Allocates enough space for count objects and returns a pointer to the 
allocated memory. The allocated memory is filled with bytes of value zero*/

void	*ft_calloc(size_t nmemb, size_t size)
{	
	void	*ptr;
	size_t	tam;

	tam = nmemb * size;
	ptr = (void *) malloc (tam);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, tam);
	return (ptr);
}

/*int	main(void)
{
	char	*test;
	
	test = ft_calloc(3, sizeof(char));
	printf("%s\n", pointer);
	printf("%c\n", pointer[0]);
	
	test = calloc(3, sizeof(char));
	printf("Funcao original: %s\n", pointer);
	printf("%c\n", pointer[0]);
}*/