#include "../includes/ft_printf.h"

static int	ft_l_numlen(intmax_t n)
{
	size_t	i;

	i = 0;
	while (n / 10)
	{
		i++;
	}
	return (i + 1);
}

char    *ft_ltoa(intmax_t n)
{
	size_t	i;
	uintmax_t	tmp;
	char	*str;

	i = ft_l_numlen(n);
	if (n < 0)
		n *= -1;
	tmp = n;
	if (!(str = ft_strnew(i)))
		return (NULL);
	while (i--)
	{
		str[i] = (tmp % 10) + 48;
		tmp /= 10;
	}
	return (str);
}