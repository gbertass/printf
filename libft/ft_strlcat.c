/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:32:07 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:26:22 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*take the full size of the buffer (not just the length) and guarantee 
to NUL the result as long as there is at least one byte free in dst)*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	lsrc;
	size_t	ldst;
	size_t	result;

	x = 0;
	result = 0;
	lsrc = ft_strlen(src);
	ldst = ft_strlen(dst);
	if (size > ldst)
	{
		result = lsrc + ldst;
	}
	else
		return (lsrc + size);
	while (src[x] && (ldst + 1) < size)
	{
		dst[ldst++] = src[x++];
	}
	dst[ldst] = '\0';
	return (result);
}

/*int	main()
{
	char	dest_3[10] = "dsto";
	char	src_3[10] = "src";
	int	size_2 = 3;
	printf("Dest antes: %s\n", dest_3);
	printf("Return of ft_strlcat: %ld\n", ft_strlcat(dest_3, src_3, size_2));
	printf("Dest depois: %s\n\n", dest_3);
}*/