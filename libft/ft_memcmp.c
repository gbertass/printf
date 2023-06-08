/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:23:33 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:15:42 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//compares the first n bytes of memory area str1 and memory area str2.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str2 = s2;
	str1 = s1;
	i = 0;
	while (n > 0)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
		n--;
	}
	return (0);
}

/*int	main()
{
	char	str_5[] = "abcdef";
	char	str_6[] = "abc";
	size_t p = 4;
	int	resultado_mcmp;
	int	original_mcmp;

	resultado_mcmp = ft_memcmp(str_5, str_6, p);
	printf("s1:%s\ns2:%s\nn:%zu\nresult:%d\n", str_5, str_6, p, resultado_mcmp);
	original_mcmp = memcmp(str_5, str_6, p);
	printf("resultado de memcmp(original): %d\n\n\n", original_mcmp);
}*/