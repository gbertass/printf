/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:28:49 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:16:35 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Locates the first occurrence of the null-termi-nated string little 
in the	string big, where not more than	len characters are searched.  
Characters that appear after a `\0'	character are not searched*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{	
		x = 0;
		while (big[i + x] != '\0'
			&& big[i + x] == little[x] && i + x < len)
		{
			if (little[x + 1] == '\0')
			{
				return ((char *)big + i);
			}
			x++;
		}
		i++;
	}
	return (NULL);
}

/*int	main()
{
	const char	big[] = "pensar";
	const char	little[] = "ar";
	size_t len = 4;
	char *resultado_nstr;
	char *original_nstr;
	resultado_nstr = ft_strnstr(big, little, len);
	printf("resultado de &big[i]: %s\n\n\n", resultado_nstr);
}*/
