
#include "../includes/ft_printf.h"

static void	ft_handler_x_short(t_printf *my_printf, unsigned short n, int fd)
{
	ft_print_f_float_fd(my_printf, n, fd);
}

static void	ft_handler_x_char(t_printf *my_printf, unsigned char c, int fd)
{
	ft_print_f_float_fd(my_printf, c, fd);
}

void		ft_handler_f_float_fd(t_printf *my_printf, va_list printf_list, int fd)
{
	ft_flag_check(my_printf);
	if (my_printf->l == 1)
		ft_print_f_float_fd(my_printf, va_arg(printf_list, double), fd);
	else if (my_printf->l == 2)
		ft_print_f_float_fd(my_printf, va_arg(printf_list, double), fd);
	else if (my_printf->lc == 1)
		ft_print_f_float_fd(my_printf, va_arg(printf_list, long double), fd);
	else if (my_printf->j == 1)
		ft_print_f_float_fd(my_printf, va_arg(printf_list, intmax_t), fd);
	else if (my_printf->z == 1)
		ft_print_f_float_fd(my_printf, va_arg(printf_list, size_t), fd);
	else
		ft_print_f_float_fd(my_printf, va_arg(printf_list, double), fd);
}
