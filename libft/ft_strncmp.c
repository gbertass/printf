/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:43:58 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:19:28 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Compares at most the first n bytes of str1 and str2.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	answer;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	answer = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (answer);
}

/*int	main()
{
	size_t	g;
	int	resultado_ncmp;
	char	s1[] = "teste1";
	char	s2[] = "teste2";
	g = 5;
	resultado_ncmp = ft_strncmp(s1, s2, g);
	printf("s1: %s\n s2: %s\n e n: %d\n\n", s1, s2, resultado_ncmp);
	resultado_ncmp = strncmp(s1, s2, g);
	printf("Fun.original:\n s1:%s\n s2:%s\n e n: %d\n", s1, s2, resultado_ncmp);

}*/