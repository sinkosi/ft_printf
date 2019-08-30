/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_X_HexadecimalX.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 11:26:33 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 15:11:51 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_handler_x_short(t_printf *my_printf, unsigned short n)
{
	ft_print_f_float(my_printf, n);
}

static void	ft_handler_x_char(t_printf *my_printf, unsigned char c)
{
	ft_print_f_float(my_printf, c);
}

void		ft_handler_f_float(t_printf *my_printf, va_list printf_list)
{
	ft_flag_check(my_printf);
	if (my_printf->l == 1)
		ft_print_f_float(my_printf, va_arg(printf_list, double));
	else if (my_printf->l == 2)
		ft_print_f_float(my_printf, va_arg(printf_list, double));
	else if (my_printf->L == 1)
		ft_print_f_float(my_printf, va_arg(printf_list, long double));
	else if (my_printf->j == 1)
		ft_print_f_float(my_printf, va_arg(printf_list, intmax_t));
	else if (my_printf->z == 1)
		ft_print_f_float(my_printf, va_arg(printf_list, size_t));
	else
		ft_print_f_float(my_printf, va_arg(printf_list, double));
}
