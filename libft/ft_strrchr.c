/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:46:13 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:20:57 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//searches for the LAST occurrence of the character c(Unsigned char) 
//in the string pointed to, by the argument str.

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *) s;
	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return ((char *)str + i);
		}
		i--;
	}
	if ((char)c == '\0')
		return ((char *)str + i);
	return (NULL);
}

/*int	main()
{
	char	str_3[] = "bonjour";
	int	d = 'o';
	char *resultado_rchr;
	char *original_rchr;
	resultado_rchr = ft_strrchr(str_3, d);
	printf("String: %s e C: %d\n", str_3, d);
	printf("resultado de str[i]: %s\n", resultado_rchr);
	original_rchr = strrchr(str_3, d);
	printf("resultado de str[i] (original): %s\n\n\n", original_rchr);
}*/