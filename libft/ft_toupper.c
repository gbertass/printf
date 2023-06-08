/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:37:31 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 16:01:35 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//The toupper() function converts a lowercase alphabet to an uppercase alphabet.

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}

/*int	main()
{
	int resultado_upper = ft_toupper(82);
    printf("teste ft_toupper:%d\n", resultado_isalnum);
    int original_upper = toupper(82);
    printf("teste toupper(original):  %d\n\n\n", original_upper);

}*/