/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:16:23 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 16:17:38 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Returns a new string, which is the result of the concatenation of ’s1’+’s2.

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ss1;
	char	*ss2;
	char	*end;

	i = 0;
	j = 0;
	ss1 = (char *) s1;
	ss2 = (char *) s2;
	end = (char *) malloc(sizeof(char) * (ft_strlen(ss1) + ft_strlen(ss2) + 1));
	if (end == NULL)
		return (NULL);
	while (ss1[i] != '\0')
	{	
		end[i] = ss1[i];
		i++;
	}
	while (ss2[j] != '\0')
	{
		end[i + j] = ss2[j];
		j++;
	}
	end[i + j] = '\0';
	return (end);
}

/*int	main()
{
	const char s1[] = "box";
	const char s2[] = "banho";
	char *fun;
	fun = ft_strjoin(s1,s2);
	printf("resultado de ft_strjoin:%s", fun);
}*/