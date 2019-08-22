/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:47:16 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 09:47:18 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_d_int(t_printf *my_printf, intmax_t n)
{
	char	*str;

	str = ft_ltoa_printf(n);
	if (n < 0)
		my_printf->flag_plus = -1;
	/*printf("\nprint_d.c my_printf->precision = %d\n", my_printf->precision);
	printf("print_d.c my_printf->prec_width = %d\n", my_printf->prec_width);
	printf("print_d.c my_printf->field_width = %d\n", my_printf->field_width);*/
	ft_flag_size(my_printf, ft_strlen(str));
	/*printf("FLAG_SIZE:\nprint_d.c my_printf->precision = %d\n", my_printf->precision);
	printf("print_d.c my_printf->prec_width = %d\n", my_printf->prec_width);
	printf("print_d.c my_printf->field_width = %d\n", my_printf->field_width);*/
	ft_flag_space(my_printf);
	/*printf("FLAG_SPACE:\nprint_d.c my_printf->precision = %d\n", my_printf->precision);
	printf("print_d.c my_printf->prec_width = %d\n", my_printf->prec_width);
	printf("print_d.c my_printf->field_width = %d\n", my_printf->field_width);*/
	ft_flag_width(my_printf);
	/*printf("FLAG_WIDTH:\nprint_d.c my_printf->precision = %d\n", my_printf->precision);
	printf("print_d.c my_printf->prec_width = %d\n", my_printf->prec_width);
	printf("print_d.c my_printf->field_width = %d\n", my_printf->field_width);*/
	ft_flag_plus(my_printf);
/*	printf("FLAG_PLUS:\nprint_d.c my_printf->precision = %d\n", my_printf->precision);
	printf("print_d.c my_printf->prec_width = %d\n", my_printf->prec_width);
	printf("print_d.c my_printf->field_width = %d\n", my_printf->field_width);*/
	if (my_printf->field_width == 0 && my_printf->prec_width > 0)
		my_printf->prec_width = 0;
	ft_flag_precision(my_printf, str);
/*	printf("FLAG_PRECISION:\nprint_d.c my_printf->precision = %d\n", my_printf->precision);
	printf("print_d.c my_printf->prec_width = %d\n", my_printf->prec_width);
	printf("print_d.c my_printf->field_width = %d\n", my_printf->field_width);*/
	my_printf->f_return += ft_strlen(str);
	ft_putstr(str);
	ft_flag_width(my_printf);
	ft_strdel(&str);
}
