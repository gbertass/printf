/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putudec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:29:38 by gbertass          #+#    #+#             */
/*   Updated: 2023/06/22 14:58:51 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intlen(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_utoa(unsigned int nb)
{
	char	*str;
	int		len;

	len = ft_intlen(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		len--;
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}

int	ft_putunsg_dec(unsigned int nb)
{
	int		count;
	char	*str;

	count = 0;
	str = ft_utoa(nb);
	count = ft_putstr(str);
	free(str);
	return (count);
}
