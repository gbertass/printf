/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:41:40 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:21:13 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copies n characters from memory area src to memory area dest.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	const char		*begin;
	unsigned char	*end;

	i = 0;
	begin = src;
	end = dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		end[i] = begin[i];
		i++;
	}
	return (end);
}

/*int	main()
{
	char src[] = "Geek";
	char dest[] = "Quiz";
	size_t n = 4;
    printf("string src antes: %s\n", src);
    printf("string dest antes: %s\n\n", dest);
	ft_memcpy(dest, src, n);
    printf("string pos ft_memcpy: %s\n", dest);
	memcpy(dest, src, n);
    printf("string pos memcpy(original): %s\n\n\n", dest);
}*/