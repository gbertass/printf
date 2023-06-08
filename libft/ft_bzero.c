/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 15:06:11 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 15:56:14 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//write zeroes to a byte string

void	ft_bzero(void *s, size_t n)
{
	unsigned int		i;
	unsigned char		*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*int	main()
{
	char u[] = "GeeksForGeeks is for programming geeks";
    printf("string antes: %s\n\n", u);
	ft_bzero(s+5, 4);
    printf("string pos ft_bzero: %s\n", s);
    char v[] = "GeeksForGeeks is for programming geeks";
    bzero(t+5, 4);
    printf("string pos bzero(original): %s\n\n\n", v);
}*/