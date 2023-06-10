/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:50:52 by gbertass          #+#    #+#             */
/*   Updated: 2023/06/10 18:48:55 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_funcfind(const char letter, va_list arg)
{
	int	count;
	
	if (letter == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (letter == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (letter == 'p')
		count += ft_pointerhex(va_arg(arg, void *)); //nao esta feito
	else if (letter == 'd' || letter == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (letter == 'u')
		count += ft_putunsg_dec(va_arg(arg, unsigned int));
	else if (letter == 'x')
		count += ft_puthexa_lower(va_arg(arg, unsigned int));
	else if (letter == 'X')
		count += ft_puthexa_upper(va_arg(arg, unsigned int));
	else if (letter == '%')
		count += ft_putchar('%');
	return (count);
}

int ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;
	
	va_start(arg, format);
	count = 0;
	while(*format != '\0')
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
	return(count);
}
