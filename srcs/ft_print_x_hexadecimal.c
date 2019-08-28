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

void	ft_print_x_hexadecimal(t_printf *my_printf, uintmax_t n)
{
	char	*str;

	str = ft_ltoa_base(n, 16);
	ft_flag_size(my_printf, ft_strlen(str));
	if (my_printf->flag_minus == 0 && my_printf->flag_zero == 0
		&& my_printf->flag_hash == 1)
		ft_flag_width(my_printf);
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
}
