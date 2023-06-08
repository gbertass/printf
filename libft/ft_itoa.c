/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:52:24 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:17:34 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Coverts the integer n into a character string. 
//The string is placed in the buffer passed (must be large enough).

int	ft_intlen(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len++;
		nb = nb * -1;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	if (len == 0)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = ft_intlen(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	len--;
	while (len >= 0 && str[len] != '-')
	{
			str[len] = (nb % 10) + '0';
			nb = nb / 10;
			len--;
	}
	return (str);
}

/*int	main()
{
	int n = -237;
	printf("Valor de n:%d\n", n);
	printf("Funcao ft_itoa:%s\n", ft_itoa(n));
}*/