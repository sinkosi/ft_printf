#include "../includes/ft_printf.h"

void	ft_handler_s_str(t_printf *my_printf, va_list printf_list)
{
	ft_flag_check(my_printf);
	if (my_printf->l != 1)
		ft_print_s_str(my_printf, va_arg(printf_list, char *));
}
