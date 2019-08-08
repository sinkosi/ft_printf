/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:40:53 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 09:40:56 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_p_pointer(t_printf *my_printf, void *pointer)
{
	char	*str;

	str = ft_itoa_base((int)pointer, 16);
	ft_flag_size(my_printf, ft_strlen(str));
	my_printf->field_width -= 2;
	if (my_printf->flag_zero == 1)
	{
		ft_putstr("0x");
		my_printf->f_return += 2;
	}
	ft_flag_width(my_printf);
	if (my_printf->flag_zero == 0)
	{
		ft_putstr("0X");
		my_printf->f_return += 2;
	}
	ft_flag_precision(my_printf, str);
	ft_putstr(str);
	my_printf->f_return += ft_strlen(str);
	ft_flag_width(my_printf);
	ft_strdel(&str);
}
