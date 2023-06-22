/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:47:05 by gbertass          #+#    #+#             */
/*   Updated: 2023/06/22 15:06:24 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long nb, char *base)
{
	int	result;

	result = 0;
	if (nb < 16)
	{
		result += ft_putchar(base[nb]);
		return (result);
	}
	result += ft_puthexa(nb / 16, base);
	result += ft_putchar(base[nb % 16]);
	return (result);
}

int	ft_putpointer(unsigned long ptr)
{
	int	result;

	result = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	result += write(1, "0x", 2);
	result += ft_puthexa(ptr, "0123456789abcdef");
	return (result);
}
