/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 13:32:52 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 15:57:30 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function tests for any printing character, including space (‘ ’)

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*int	main()
{
	int resultado_isprint = ft_isprint(45);
    printf("teste ft_isprint:%d\n", resultado_isprint);
    int original_isprint = isprint(45);
    printf("teste isprint(original):  %d\n\n\n", original_isprint);
}*/