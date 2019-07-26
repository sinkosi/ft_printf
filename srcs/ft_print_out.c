#include "../includes/ft_printf.h"

void	ft_print_out(t_printf *my_printf, char *str)
{
	while (str[my_printf->i] != '%' && str[my_printf->i] != '\0')
	{
		ft_putchar(str[my_printf->i]);
		my_printf->i += 1;
		my_printf->f_return += 1;
	}
}
