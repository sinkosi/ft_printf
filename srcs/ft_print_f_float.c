/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x_hexadecimal2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 11:32:34 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 11:33:17 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_f_float(t_printf *my_printf, double n)
{
	char	*str;
	intmax_t a;
	intmax_t b;

	a = n;
	printf("over here and %jd\n over there", a);
	str = ft_ltoa_base(n, 10);
	n -= a;
	a = ft_power(n, 6);
	/*
	Dear Sibo, what you must do now is create a function that will take a number
	and multiply it to the power of ten.
	Then you will want to cast that number back into the intmax. This will allow
	you to then hold the radix. Then you will cast that and join it with a dot.
	*/
	printf("WHAT IS THE my_printf->convert = %c\n", my_printf->convert);
	ft_flag_size(my_printf, ft_strlen(str));
	if (my_printf->flag_minus == 0 && my_printf->flag_zero == 0
		&& my_printf->flag_hash == 1)
		ft_flag_width(my_printf);
	if (str[0] != '0' && my_printf->flag_hash == 1)
	{
		ft_putstr("0X");
		my_printf->f_return += 2;
	}
	ft_flag_width(my_printf);
	ft_putstr(str);
	my_printf->f_return += ft_strlen(str);
	if (my_printf->field_width > 0)
		ft_flag_width(my_printf);
	ft_strdel(&str);
}
