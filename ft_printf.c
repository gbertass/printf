/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:50:52 by gbertass          #+#    #+#             */
/*   Updated: 2023/06/22 15:33:16 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_funcfind(const char letter, va_list arg)
{
	int	count;

	count = 0;
	if (letter == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (letter == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (letter == 'p')
	count += ft_putpointer(va_arg(arg, unsigned long));
	else if (letter == 'd' || letter == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (letter == 'u')
		count += ft_putunsg_dec(va_arg(arg, unsigned int));
	else if (letter == 'x')
		count += ft_puthexa(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (letter == 'X')
		count += ft_puthexa(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (letter == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;

	va_start(arg, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += ft_funcfind(*format, arg);
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(arg);
	return (count);
}
