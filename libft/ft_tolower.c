/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:19:04 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:21:27 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//The tolower() function takes an uppercase alphabet and 
//convert it to a lowercase character

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
	}
	return (c);
}

/*int	main()
{
	int resultado_lower = ft_tolower(67);
    printf("teste ft_tolower:%d\n", resultado_lower);
    int original_lower = tolower(67);
    printf("teste tolower(original):  %d\n\n\n", original_lower);
}*/