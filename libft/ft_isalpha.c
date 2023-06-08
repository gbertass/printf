/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 11:24:50 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 15:51:15 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function tests for any character for which isupper(3) or islower(3) is true

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/*int	main()
{
    int resultado_isalpha = ft_isalpha(105);
    printf("teste ft_isalpha:%d\n\n", resultado_isalpha);
    int original_isalpha = isalpha(105);
    printf("teste isalpha(original):  %d\n\n\n", original_isalpha);
}*/
