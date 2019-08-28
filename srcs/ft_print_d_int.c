/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:47:16 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/26 14:16:22 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_d_int(t_printf *my_printf, intmax_t n)
{
	char	*str;
	//printf("print_d_int the number n is %ld\n", n);
	str = ft_ltoa_printf(n);
	if (n < 0)
		my_printf->flag_plus = -1;
	ft_flag_size(my_printf, ft_strlen(str));
/*	printf("1A. print_d_int my_printf->prec_width = %d\n", my_printf->prec_width);
	printf("1B. print_d_int my_printf->field_width = %d\n", my_printf->field_width);
	printf("1C. print_d_int my_printf->precision = %d\n", my_printf->precision);*/
	ft_flag_space(my_printf);
	if (my_printf->prec_width > 0)
		my_printf->field_width -= my_printf->prec_width;
	/*printf("2A. print_d_int my_printf->prec_width = %d\n", my_printf->prec_width);
	printf("2B. print_d_int my_printf->field_width = %d\n", my_printf->field_width);*/
	ft_flag_width(my_printf);
	ft_flag_plus(my_printf);
	/*printf("3A. print_d_int my_printf->prec_width = %d\n", my_printf->prec_width);
	printf("3B. print_d_int my_printf->field_width = %d\n", my_printf->field_width);*/
	ft_flag_precision(my_printf, str);
	if (my_printf->field_width == 0 && my_printf->prec_width > 0)
		my_printf->prec_width = 0;
	ft_flag_precision(my_printf, str);
	my_printf->f_return += ft_strlen(str);
	ft_putstr(str);
	ft_flag_width(my_printf);
	ft_strdel(&str);
}
