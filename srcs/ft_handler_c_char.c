#include "../includes/ft_printf.h"

void	ft_handler_c_char(t_printf *my_printf, va_list printf_list)
{
	if (my_printf->h == 1)
		return ;
	else if (my_printf->h == 2)
		return ;
	else if (my_printf->l == 2)
		return ;
	else if (my_printf->j == 1)
		return ;
	else if (my_printf->z == 1)
		return ;
	ft_flag_check(my_printf);
	if (my_printf->l != 1)
		ft_print_c_char(my_printf, va_arg(printf_list, int));
}