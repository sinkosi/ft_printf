/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_x_hexadecimal.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:45:38 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 09:45:39 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_handler_x_hexadecimal(t_printf *my_printf, va_list printf_list)
{
	ft_flag_check(my_printf);
	ft_print_x_hexadecimal(my_printf, va_arg(printf_list, unsigned int));
}
