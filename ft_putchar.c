/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:26:15 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/24 12:16:28 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *c)
{
	write(1, &c, 1);
}

/*int	main(void)
{
	ft_putchar('w');
	return (0);
}*/