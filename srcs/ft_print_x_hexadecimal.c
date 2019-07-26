#include "../includes/ft_printf.h"

void	ft_print_x_hexadecimal(t_printf *my_printf, unsigned int n)
{
	char	*str;

	str = ft_itoa_base(n, 16);
	ft_flag_size(my_printf, ft_strlen(str));
	if (str[0] != '0' && my_printf->flag_hash == 1)
	{
		ft_putstr("0x");
		my_printf->f_return += 2;
	}
	ft_putstr(str);
	my_printf->f_return += ft_strlen(str);
	ft_flag_width(my_printf);
	ft_strdel(&str);
}
