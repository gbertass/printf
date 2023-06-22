/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:28:10 by gbertass          #+#    #+#             */
/*   Updated: 2023/06/22 15:11:48 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	long	result;

	result = 0;
	if (n < 0)
	{
		result += ft_putchar('-');
		n = n * -1;
	}
	if (n < 10)
	{
		result += ft_putchar(n + '0');
		return (result);
	}
	else
	{
		result += ft_putnbr(n / 10);
		result += ft_putchar((n % 10) + '0');
	}
	return (result);
}
