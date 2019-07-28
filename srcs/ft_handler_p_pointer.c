/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_p_pointer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:45:08 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 09:45:10 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_handler_p_pointer(t_printf *my_printf, va_list printf_list)
{
	ft_flag_check(my_printf);
	ft_print_p_pointer(my_printf, va_arg(printf_list, void *));
}
