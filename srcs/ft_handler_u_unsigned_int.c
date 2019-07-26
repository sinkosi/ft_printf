#include "../includes/ft_printf.h"

void	ft_handler_u_unsigned_int(t_printf *my_printf, va_list printf_list)
{
	ft_flag_check(my_printf);
	ft_print_u_unsigned_int(my_printf, va_arg(printf_list, unsigned int));
}
