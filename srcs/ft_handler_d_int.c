#include "../includes/ft_printf.h"

void	ft_handler_d_int(t_printf *my_printf, va_list printf_list)
{
	ft_flag_check(my_printf);
	if (my_printf->h == 1)
		ft_print_d_int(my_printf, va_arg(printf_list, int));
}
