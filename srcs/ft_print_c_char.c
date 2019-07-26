/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:19:13 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/17 11:19:17 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_c_char(t_printf *my_printf, int c)
{
	ft_flag_size(my_printf, 1);
	ft_flag_width(my_printf);
	ft_putchar(c);
	ft_flag_width(my_printf);
	my_printf->f_return += 1;
}
