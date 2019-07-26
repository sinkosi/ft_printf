#include "../includes/ft_printf.h"

void	ft_flag_space(t_printf *my_printf)
{
	if (my_printf->flag_space == 1 && my_printf->flag_plus == 0)
	{
		ft_putchar(' ');
		my_printf->f_return += 1;
	}
}
