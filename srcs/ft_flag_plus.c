#include "../includes/ft_printf.h"

void	ft_flag_plus(t_printf *my_printf)
{
	if (my_printf->flag_plus == -1)
		ft_putchar('-');
	else if (my_printf->flag_plus == 1)
		ft_putchar('+');
	if (my_printf->flag_plus == 1 || my_printf->flag_plus == 1)
		my_printf->f_return++;
	if (my_printf->flag_zero == 1 && my_printf->flag_plus != 0)
		my_printf->flag_plus = 2;
}
