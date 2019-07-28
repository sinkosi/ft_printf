/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_X_HexadecimalX.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 11:26:33 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 11:31:24 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_handler_x_hexadecimal2(t_printf *my_printf, va_list printf_list)
{
	ft_flag_check(my_printf);
	ft_print_x_hexadecimal2(my_printf, va_arg(printf_list, unsigned int));
}
