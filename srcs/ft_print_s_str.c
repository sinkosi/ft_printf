/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:19:50 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/17 11:19:53 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_s_str(t_printf *my_printf, char *str)
{
	char	*nullstr;

	nullstr = "(null)";
	if (str != NULL)
	{
		/*printf("\nprint_d.c my_printf->precision = %d\n", my_printf->precision);
		printf("print_d.c my_printf->prec_width = %d\n", my_printf->prec_width);
		printf("print_d.c my_printf->field_width = %d\n", my_printf->field_width);*/
		if (my_printf->prec_width > 0) //&& my_printf->field_width == 0)
			str = ft_strndup(str, my_printf->prec_width);
		ft_flag_size(my_printf, ft_strlen(str));
		/*printf("FLAG_SIZE:\nprint_d.c my_printf->precision = %d\n", my_printf->precision);
		printf("print_d.c my_printf->prec_width = %d\n", my_printf->prec_width);
		printf("print_d.c my_printf->field_width = %d\n", my_printf->field_width);*/
		ft_flag_width(my_printf);
		/*printf("FLAG_WIDTH:\nprint_d.c my_printf->precision = %d\n", my_printf->precision);
		printf("print_d.c my_printf->prec_width = %d\n", my_printf->prec_width);
		printf("print_d.c my_printf->field_width = %d\n", my_printf->field_width);*/
		ft_flag_precision(my_printf, str);
		/*printf("FLAG_PRECISION:\nprint_d.c my_printf->precision = %d\n", my_printf->precision);
		printf("print_d.c my_printf->prec_width = %d\n", my_printf->prec_width);
		printf("print_d.c my_printf->field_width = %d\n", my_printf->field_width);*/
		ft_putstr(str);
		my_printf->f_return += ft_strlen(str);
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
