/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:05:12 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:26:56 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Functions are used to duplicate a string and returns a pointer to a null
byte string, which is a duplicate of the string pointed to by s. 
It returns a pointer to the duplicated string s.*/

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main()
{
	const char z[] = "Alocação dinâmica de memória";
	char *teste_dup;
	char *teste2_dup;
	teste_dup = ft_strdup(z);
	printf("resultado ft_strdup:%s\n", teste_dup); 
	teste2_dup = strdup(z);
	printf("resultado strdup(original):%s\n", teste2_dup);
}*/