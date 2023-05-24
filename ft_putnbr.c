/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:34:52 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/24 11:40:27 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

#include <unistd.h>

void	ft_rnbr(int nb)
{
	int	a[10];
	int	i;
	int	c;

	i = 0;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
	}
	while (nb != 0)
	{
		a[i] = (nb % 10) + 48;
		i++;
		nb = nb / 10;
	}
	while (i > 0)
	{
		i--;
		c = a[i];
		write(1, &c, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		ft_rnbr(nb);
	}
}

/*int	main(void)
{
	ft_putnbr(10);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}*/