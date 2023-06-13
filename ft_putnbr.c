#include "libftprintf.h"

int ft_putnbr(long n)
{   
    long result;

    result = 0;
    if (n < 0)
    {
        ft_putchar('-');
        n = n * -1;
    }
    if (n < 10)
    {
        result += ft_putchar(n + '0');
        return (result);
    }
    else
    {
        ft_putnbr(n / 10);
        result += ft_putchar((n % 10) + '0');
    }
    return(result);
}
