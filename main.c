/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:46:11 by gbertass          #+#    #+#             */
/*   Updated: 2023/06/20 17:18:21 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "libftprintf.h"

int	main()
{
	printf("O: equivale a funcao original\n");
	ft_printf("M: equievale a minha funcao\n\n");

	int	i; //print original
	int	m; //meu print
	i = 0;
	m = 0;

	printf("o: número hexadecimal minúsculo -> %x\n", 10);
	ft_printf("m: número hexadecimal minúsculo -> %x\n\n", 10);

	printf("o: número hexadecimal minúsculo negativo -> %x\n", -10);
	ft_printf("m: número hexadecimal minúsculo negativo-> %x\n\n", -10);

	printf("o: número hexadecimal maiúsculo -> %X\n", 10);
	ft_printf("m: número hexadecimal maiúsculo -> %X\n\n", 10);

	printf("o: número hexadecimal maiúsculo negativo-> %X\n", -10);
	ft_printf("m: número hexadecimal maiúsculo negativo -> %X\n\n", -10);

	printf("o: número decimal -> %d\n", 28);
	ft_printf("m: número decimal -> %d\n\n", 28);

	printf("o: número decimal sem sinal: %u\n", -5);
	ft_printf("m: número decimal sem sinal: %u\n\n", -5);
	
	return (0);
}