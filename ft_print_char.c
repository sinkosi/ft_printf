#include "ft_printf.h"

int	ft_print_char(int c)
{
	if (ft_isprint(c) == 1)
		ft_putchar(c);
	else
	{
		c = (wchar_t)c;
		write(1, &c, 1);
	}
	return (1);
}
