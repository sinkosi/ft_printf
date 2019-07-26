#include "../includes/ft_printf.h"

void	ft_print_u_unsigned_int(t_printf *my_printf, unsigned int n)
{
	char	*str;

	str = ft_itoa_base(n, 10);
	ft_flag_size(my_printf, ft_strlen(str));
	ft_flag_width(my_printf);
	ft_flag_precision(my_printf, str);
	ft_putstr(str);
	my_printf->f_return += ft_strlen(str);
	ft_flag_width(my_printf);
	ft_strdel(&str);
}
