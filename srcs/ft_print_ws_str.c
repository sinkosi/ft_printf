#include "../includes/ft_printf.h"

void	ft_print_ws_str(t_printf *my_printf, wchar_t *str)
{
	char	*nullstr;

	nullstr = "(null)";
	if (str != NULL)
	{
		ft_flag_size(my_printf, sizeof(str));
		ft_flag_width(my_printf);
		ft_flag_precision(my_printf, (char *)str);
		ft_putwstr(str);
		my_printf->f_return += sizeof(str);
		ft_flag_width(my_printf);
	}
	else
	{
		ft_flag_size(my_printf, ft_strlen(nullstr));
		ft_flag_width(my_printf);
		ft_flag_precision(my_printf, nullstr);
		ft_putstr(nullstr);
		my_printf->f_return += ft_strlen(nullstr);
		ft_flag_width(my_printf);
	}
}

void	ft_print_ws_str_fd(t_printf *my_printf, wchar_t *str, int fd)
{
	char	*nullstr;

	nullstr = "(null)";
	if (str != NULL)
	{
		ft_flag_size(my_printf, sizeof(str));
		ft_flag_width_fd(my_printf, fd);
		ft_flag_precision_fd(my_printf, (char *)str, fd);
		ft_putwstr_fd(str, fd);
		my_printf->f_return += sizeof(str);
		ft_flag_width_fd(my_printf, fd);
	}
	else
	{
		ft_flag_size(my_printf, ft_strlen(nullstr));
		ft_flag_width_fd(my_printf, fd);
		ft_flag_precision_fd(my_printf, nullstr, fd);
		ft_putstr_fd(nullstr, fd);
		my_printf->f_return += ft_strlen(nullstr);
		ft_flag_width_fd(my_printf, fd);
	}
}
