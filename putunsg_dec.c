#include "libftprintf.h"
//Coverts the integer n into a character string. 
//The string is placed in the buffer passed (must be large enough).

int	ft_intlen(unsigned int nb)
{
	int	len;

	len = 0;
    if (nb == 0)
        return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_putunsg_dec(unsigned int nb)
{
	char	*str;
	int		len;

	len = ft_intlen(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
        len--;
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}

/*int	main()
{
	int n = -237;
	printf("Valor de n:%d\n", n);
	printf("Funcao ft_itoa:%s\n", ft_itoa(n));
}*/