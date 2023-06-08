/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:54:35 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:19:50 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*tests for any character for which isalpha(3) or isdigit(3) is true.  
The value of the argument must be representable as an unsigned char*/

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*int	main()
{
	int resultado_isalnum = ft_isalnum(102);
    printf("teste ft_isalnum:%d\n", resultado_isalnum);
    int original_isalnum = isalnum(102);
    printf("teste isalnum(original):  %d\n\n\n", original_isalnum);
}*/