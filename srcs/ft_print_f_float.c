/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x_hexadecimal2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 11:32:34 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/30 12:46:16 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_f_float(t_printf *my_printf, double n)
{
	char		*str;
	char		*mantissa;
	intmax_t	a;

	a = n;
	str = ft_ltoa_base(n, 10);
	n -= a;
	if (my_printf->prec_width <= 0)
		my_printf->prec_width = 6;
	a = ft_power_ten(ft_fabs(n), my_printf->prec_width);
	mantissa = ft_ltoa_base(a, 10);
	ft_flag_size(my_printf, ft_strlen(str));
	if (my_printf->flag_minus == 0 && my_printf->flag_zero == 0
		&& my_printf->flag_hash == 1)
		ft_flag_width(my_printf);
	ft_flag_size(my_printf, ft_strlen(mantissa));
	if (my_printf->flag_minus == 0 && my_printf->flag_zero == 0
		&& my_printf->flag_hash == 1)
		ft_flag_width(my_printf);
	ft_flag_width(my_printf);
	ft_putstr(str);
	my_printf->f_return += ft_strlen(str);
	ft_putstr(".");
	my_printf->f_return += 1;
	ft_putstr(mantissa);
	my_printf->f_return += ft_strlen(mantissa);
	if (my_printf->field_width > 0)
		ft_flag_width(my_printf);
	ft_strdel(&str);
}
