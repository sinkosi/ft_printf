/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 16:19:44 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/07 08:41:48 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *parse_str, ...)
{
	t_printf	my_printf;
	va_list		printf_list;

	my_printf.i = 0;
	my_printf.f_return = 0;
	va_start(printf_list, (char *)parse_str);
	while (parse_str[my_printf.i] != '\0')
	{
		if (parse_str[my_printf.i] == '%')
		{
			my_printf.i++;
			ft_convert(&my_printf, printf_list, (char *)parse_str);
		}
		else
			ft_print_out(&my_printf, (char *)parse_str);
	}
	va_end(printf_list);
	return (my_printf.f_return);
}
