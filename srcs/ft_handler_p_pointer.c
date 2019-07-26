#include "../includes/ft_printf.h"

void	ft_handler_p_pointer(t_printf *my_printf, va_list printf_list)
{
	ft_flag_check(my_printf);
	ft_print_p_pointer(my_printf, va_arg(printf_list, void *));
}
