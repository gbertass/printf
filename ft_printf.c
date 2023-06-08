/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:50:52 by gbertass          #+#    #+#             */
/*   Updated: 2023/06/08 15:29:14 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_funcfind(const char letter, va_list arg)
{
	int	count;
	
	if (letter == 'c')
		count += ft_putchar_fd(va_arg(arg, int), 1);
	else if (letter == 's')
		count += ft_putstr_fd(va_arg(arg, char *), 1);
	else if (letter == 'p')
		count += ft_
		
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
			count += ft_funcfind(&format, arg);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			count++;
		}
		format++;
	}
	va_end(arg);
	return(count);
}
