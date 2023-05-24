/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:19:03 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/24 12:11:45 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i]  != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}outroteste

/*int	main()
{
	char *str = "superMario";
	ft_putstr(str);
	write(1, "\n", 1);
}*/