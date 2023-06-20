/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:47:05 by gbertass          #+#    #+#             */
/*   Updated: 2023/06/20 17:26:24 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthexa(unsigned long nb, char *base)
{
	int	result;

	result = 0;
	if (nb < 16)
	{
		result += ft_putchar(base[nb]);
		return (result);
	}
	ft_puthexa(nb / 16, base);
	result += ft_putchar(base[nb % 16]);
	return (result);
}
