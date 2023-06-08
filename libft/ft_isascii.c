/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 13:10:47 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:13:39 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The function tests for an ASCII character, 
which is any character between 0 and octal 0177*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*int	main()
{
	int resultado_ascii = ft_isascii(150);
    printf("teste ft_isascii:%d\n", resultado_ascii);
    int original_ascii = isascii(150);
    printf("teste isascii(original):  %d\n\n\n", original_ascii);
}*/
