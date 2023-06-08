/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:54:47 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:31:27 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Returns a substring from the string s. The substring begins at start and is
of maximum size ’len. S: The string from which to create the substring. 
Start: The start index of the substring in the string ’s’.
len: The maximum length of the substring*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		j;

	j = 0;
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		str = (char *) malloc(sizeof(char) * 1);
		if (str == NULL)
			return (NULL);
		str[j] = '\0';
		return (str);
	}
	str = (char *) malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (start < ft_strlen(s) && j < len)
	{
		str[j] = s[start];
		j++;
		start++;
	}
	str[j] = '\0';
	return (str);
}

// int main()
// {
// 	const char s[] = "abobora assada";
// 	size_t l = 6;
// 	unsigned int start = 3;
// 	char	*teste;
// 	teste = ft_substr(s, start, l);
// 	printf("resultado ft_substr:%s\n", teste);
// }