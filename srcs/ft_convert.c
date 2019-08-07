/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 16:20:01 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/07 08:41:21 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_convert(t_printf *my_printf, va_list printf_list, char *str)
{
	ft_flag_reset(my_printf);
	while (str[my_printf->i] != '\0' &&
			(ft_strchr_bool(PARSE, str[my_printf->i]) == 0))
	{
		if (ft_strchr_bool(FLAGS, str[my_printf->i]) == 1)
			ft_flag_set(my_printf, str);
		my_printf->i += 1;
	}
	if (ft_strchr_bool(PARSE, str[my_printf->i]))
	{
		my_printf->convert = str[my_printf->i];
		my_printf->i += 1;
		ft_handler_convert(my_printf, printf_list);
	}
	else
		return ;
}
