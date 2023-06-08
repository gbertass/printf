/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:33:30 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:20:44 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Locates the first occurrence of of the character c(unsigned char) 
//in the first N bytes of the string pointed to, by the argument str.

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{	
		if (str[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}

/*int	main()
{
	char	str_4[] = "bonjour";
	int	e = '\0';
	size_t m = 2;
	char *resultado_mchr;
	char *original_mchr;
	resultado_mchr = ft_memchr(str_4, e, m);
	printf("string: %s e C: %d e N: %zu\n", str, e, m);
	printf("resultado de str[i]: %s\n", resultado_mchr);
	original_mchr = memchr(str_4, e, m);
	printf("resultado de str[i] (original): %s\n\n\n", original_mchr);
}*/