/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:32:05 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:16:56 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*take the full size of the buffer (not just the length) and guarantee to 
NUL-terminate the result (as long as size is larger than 0)*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main()
{
	char dst_2[] = "a 42 e um teste psicologico";
	char src_2[] = "baleia";
    size_t  size = 10;
    printf("resultado do i:%zu\n\n\n",ft_strlcpy(dst_2, src_2, size));
}*/