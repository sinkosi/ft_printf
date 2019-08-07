/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:41:05 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/07 08:49:56 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_flag_width(t_printf *my_printf)
{
	if (my_printf->flag_minus == 1)
		my_printf->flag_minus = 2;
	else if (my_printf->flag_minus == 0 || my_printf->flag_minus == 2)
	{
		if (my_printf->flag_zero == 1 && my_printf->precision == 0
				&& my_printf->flag_minus == 0)
		{
			ft_flag_plus(my_printf);
			while (my_printf->format_word > 0)
			{
				ft_putchar('0');
				my_printf->f_return += 1;
				my_printf->format_word -= 1;
			}
		}
		else
			while (my_printf->format_word > 0)
			{
				ft_putchar(' ');
				my_printf->f_return += 1;
				my_printf->format_word -= 1;
			}
	}
}
