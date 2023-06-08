/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 11:41:33 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 15:52:02 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function tests for a decimal digit character

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*int	main()
{
	int resultado_isdigit = ft_isdigit(10);
    printf("teste ft_isdigit:%d\n", resultado_isdigit);
    int original_isdigit = isdigit(10);
    printf("teste isdigit(original):  %d\n\n\n", original_isdigit);
}*/
