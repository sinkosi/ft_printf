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

void	ft_print_d_int(t_printf *my_printf, __intmax_t n)
{
	char	*str;

	str = ft_itoa(n);
	if (n < 0)
		my_printf->flag_plus = -1;
	ft_flag_size(my_printf, ft_strlen(str));
	ft_flag_space(my_printf);
	ft_flag_width(my_printf);
	ft_flag_plus(my_printf);
	ft_flag_precision(my_printf, str);
	my_printf->f_return += ft_strlen(str);
	ft_putstr(str);
	ft_flag_width(my_printf);
	ft_strdel(&str);
}
