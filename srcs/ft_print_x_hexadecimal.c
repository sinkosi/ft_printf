/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x_hexadecimal.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:44:11 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 09:44:12 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_x_hexadecimal(t_printf *my_printf, unsigned long long n)
{
	char	*str;

	str = ft_itoa_base(n, 16);
	ft_flag_size(my_printf, ft_strlen(str));
/*	printf("print_x my_printf->field_width = %d\n", my_printf->field_width);
	printf("print_x my_printf->flag_hash = %d\n", my_printf->flag_hash);
	printf("print_x my_printf->flag_minus = %d\n", my_printf->flag_minus);
	printf("print_x my_printf->flag_zero = %d\n", my_printf->flag_zero);
	printf("print_x my_printf->flag_plus = %d\n", my_printf->flag_plus);
*/	
	if (my_printf->flag_minus == 0 && my_printf->flag_zero == 0 && my_printf->flag_hash == 1)
	{	
		ft_flag_width(my_printf);
		//ft_putstr("DAMN");
	}
	
	if (str[0] != '0' && my_printf->flag_hash == 1)
	{
		ft_putstr("0x");
		my_printf->f_return += 2;
	}
	ft_flag_width(my_printf);
	str = ft_strlowcase(str);
	ft_putstr(str);
	my_printf->f_return += ft_strlen(str);
	if (my_printf->field_width > 0)
		ft_flag_width(my_printf);
	ft_strdel(&str);
//	printf("POST: print_x my_printf->field_width = %d\n", my_printf->field_width);
}
