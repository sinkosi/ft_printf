/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_convert.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 11:10:00 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/07 08:47:36 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_handler_convert(t_printf *my_printf, va_list printf_list)
{
	if (my_printf->convert == 'i' || my_printf->convert == 'd')
		ft_handler_d_int(my_printf, printf_list);
	else if (my_printf->convert == 'c')
		ft_handler_c_char(my_printf, printf_list);
	else if (my_printf->convert == 'o' || my_printf->convert == 'O')
		ft_handler_o_octal(my_printf, printf_list);
	else if (my_printf->convert == 'b' || my_printf->convert == 'B')
		ft_handler_b_binary(my_printf, printf_list);
	else if (my_printf->convert == 'u' || my_printf->convert == 'U')
		ft_handler_u_unsigned_int(my_printf, printf_list);
	else if (my_printf->convert == 'x')
		ft_handler_x_hexadecimal(my_printf, printf_list);
	else if (my_printf->convert == 'X')
		ft_handler_xc_hexadecimal(my_printf, printf_list);
	else if (my_printf->convert == 'p' || my_printf->convert == 'P')
		ft_handler_p_pointer(my_printf, printf_list);
	else if (my_printf->convert == 's')
		ft_handler_s_str(my_printf, printf_list);
	else if (my_printf->convert == '%' || my_printf->convert == '\%')
		ft_print_mod(my_printf);
}
