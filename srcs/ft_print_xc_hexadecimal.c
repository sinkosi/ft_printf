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

void	ft_print_xc_hexadecimal(t_printf *my_printf, unsigned long long n)
{
	char	*str;

	str = ft_itoa_base(n, 16);
	ft_flag_size(my_printf, ft_strlen(str));
	ft_flag_width(my_printf);
	if (str[0] != '0' && my_printf->flag_hash == 1)
	{
		ft_putstr("0X");
		my_printf->f_return += 2;
	}
	ft_putstr(str);
	my_printf->f_return += ft_strlen(str);
	ft_strdel(&str);
}
