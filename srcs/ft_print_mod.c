/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_mod.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:44:04 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 09:44:06 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_mod(t_printf *my_printf)
{
	ft_flag_size(my_printf, 1);
	ft_flag_width(my_printf);
	ft_putchar('%');
	ft_flag_width(my_printf);
	my_printf->f_return += 1;
}
