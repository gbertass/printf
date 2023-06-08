/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:13:45 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 18:13:28 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Applies the function ’f’ on each character of the string passed as argument, 
passing its index as first argument. Each character is passed 
by address to ’f’ to be modified if necessary.*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			f (i, &s[i]);
			i++;
		}
	}
}

/*int	main()
{
	void convert_to_uppercase(unsigned int i, char *c)
	{
		*c = ft_toupper(*c);
	}

	char s[] = "hello world";
	ft_striteri(s, &convert_to_uppercase);
	printf("%s\n", s);  // imprime "HELLO WORLD"
	return 0;
}*/