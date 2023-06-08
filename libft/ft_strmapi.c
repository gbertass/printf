/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:44:49 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:27:53 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Applies the function ’f’ to each character of the string s, and passing its 
index as first argument to create a new string f/successive applications of f*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	int				count;

	count = ft_strlen(s);
	i = 0;
	str = (char *) malloc (sizeof (char) * count + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f (i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main()
{
	char touppercase(unsigned int i, char c)
	{
		return (char) (c >= 'a' && c <= 'z' ? c - 'a' + 'A' : c);
	}

	const char s[] = "hello world";
	char	*depois;
	depois = ft_strmapi(s, touppercase);
	printf("%s\n", depois);  // imprime "HELLO WORLD"
	return 0;
}*/