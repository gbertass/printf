/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:46:39 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/24 11:46:52 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{	
	unsigned int	i;
	const char		*str;

	str = s;
	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)str + i);
	return (NULL);
}

/*int	main()
{
	char	str_2[] = "bonjour";
	int	c = 'j';
	char *resultado_strchr;
	char *original_strchr;
	resultado_strchr = ft_strchr(str_2, c);
	printf("string%s e c%d:\n", str_2, c);
	printf("resultado de str[i]: %s\n", resultado_strchr);
	original_strchr = strchr(str_2, c);
	printf("resultado de str[i] (original): %s\n\n\n", original_strchr);