/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:46:49 by gbertass          #+#    #+#             */
/*   Updated: 2023/06/10 16:52:36 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(char c)
{
	return(write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int count;
	
	count = 0;
	while(*s)
	{
		count += ft_putchar(*s++);
	}
	if (!s)
		return(0);
	return (count);
}