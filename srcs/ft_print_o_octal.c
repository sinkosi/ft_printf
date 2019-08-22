/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_o_octal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:43:28 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 14:27:45 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_o_octal(t_printf *my_printf, unsigned long long n)
{
	char *str;

	str = ft_itoa_base(n, 8);
	ft_flag_size(my_printf, ft_strlen(str));
	ft_flag_width(my_printf);
	ft_flag_precision(my_printf, str);
	my_printf->f_return += ft_strlen(str);
	ft_putstr(str);
/*	printf("print_o my_printf->flag_hash = %d\n", my_printf->flag_hash);
	printf("print_o my_printf->flag_minus = %d\n", my_printf->flag_minus);
	printf("print_o my_printf->field_width = %d\n", my_printf->field_width);
	printf("print_o my_printf->precision = %d\n", my_printf->precision);
	printf("print_o my_printf->prec_width = %d\n", my_printf->prec_width);*/
	if (my_printf->flag_minus == 2 && my_printf->prec_width == 0)
		my_printf->field_width -= 1;
	ft_flag_width(my_printf);
	ft_strdel(&str);
}
