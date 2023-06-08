/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:05:27 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 16:10:11 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Convert ASCII string to integer

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nb_result;
	int	signal;

	signal = 1;
	i = 0;
	nb_result = 0;
	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v'
		|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
				i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-' )
		{
		signal = signal * -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb_result = (nb_result) * 10 + nptr[i] - 48;
		i++;
	}
	nb_result = nb_result * signal;
	return (nb_result);
}

/*int	main()
{
	char	str_7[] = "       -+-921bc687";
	int	result_1;
    int test_1;
	result_1 = ft_atoi(str_7);
	printf("input: %s\n", str_7);
	printf("resultado da funcao: %i\n\n", result_1);
	printf("funcao original:\n");
    test_1 = atoi(str_7);
    printf("input: %s\n", str_7);
	printf("resultado da funcao: %i\n\n\n", test_1);
}*/