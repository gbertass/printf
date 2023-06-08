/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 13:48:28 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 15:55:13 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*copies the character c (an unsigned char) to the first n characters
 of the string pointed to, by the argument str.*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

/*int	main()
{
	char s[] = "GeeksForGeeks is for programming geeks";
    printf("string antes: %s\n\n", s);
	ft_memset(s + 13,46,13);
    printf("string pos ft_memset: %s\n", s);
    char t[] = "GeeksForGeeks is for programming geeks";
    memset(t + 13,46,13);
    printf("string pos memset (original): %s\n\n\n", t);
}*/
