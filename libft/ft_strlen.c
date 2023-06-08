/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:38:09 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 15:58:20 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//The strlen() function calculates the length of a given string.

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main()
{
	char	str[] = "pum";
	int	cont;
	int value;
	cont = ft_strlen(str);
	printf("Valor de cont/i = %u\n\n", cont);	
	value = strlen(str);
	printf("Valor de cont/i (original) = %u\n\n\n", value);
}*/