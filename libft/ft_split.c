/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:14:41 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:21:49 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Returns an array of strings obtained by splitting ’s’ using the character ’c’
as a delimiter. The array must end with a NULL pointer.*/

int	countword(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (words);
}

int	wordlen(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * (countword(s, c) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			str[j] = ft_substr(&s[i], 0, wordlen(&s[i], c));
			if (str[j] == NULL)
				return (NULL);
			i = i + ft_strlen(str[j]);
			j++;
		}
	}
	str[j] = NULL;
	return (str);
}

/*int	main()
{
	const char s[] = "elefante toma banho";
	char c = 'a';
	char **str = ft_split(s, c);
	int	i = 0;
	while(str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}*/