/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_d_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:44:59 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/06 16:11:16 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_handler_d_char(t_printf *my_printf, char c)
{
	ft_print_d_int(my_printf, c);
}

void	ft_handler_d_int(t_printf *my_printf, va_list printf_list)
{
	printf("CHAR D is found");
	ft_flag_check(my_printf);
	if (my_printf->h == 1)
		ft_print_d_int(my_printf, va_arg(printf_list, int));
	else if (my_printf->h == 2)
		ft_print_d_int(my_printf, va_arg(printf_list, int));
	else if (my_printf->l == 1)
		ft_print_d_int(my_printf, va_arg(printf_list, long));
	else if (my_printf->l == 2)
		ft_print_d_int(my_printf, va_arg(printf_list, long long));
	else if (my_printf->j == 1)
		ft_print_d_int(my_printf, va_arg(printf_list, intmax_t));
	else if (my_printf->z == 1)
		ft_print_d_int(my_printf, va_arg(printf_list, size_t));
	else
		ft_print_d_int(my_printf, va_arg(printf_list, int));
}
