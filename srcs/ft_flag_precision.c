/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_precision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 12:04:16 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/13 09:15:13 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
** The purpose of this function is to be
*/

void	ft_flag_precision(t_printf *my_printf, char *str)
{
	char	c;

	c = my_printf->convert;
	if ((str[0] != '0') && (my_printf->prec_width < 0) &&
			(my_printf->flag_hash == 1) && (c == 'o'))
	{
		ft_putchar('0');
		my_printf->f_return += 1;
	}
	if (c == 'i' || c == 'd' || c == 'x' || c == 'X' || c == 'o' ||
			c == 'p' || c == 'u')
		while (my_printf->prec_width > 0)
		{
			ft_putchar('0');
			my_printf->prec_width -= 1;
			my_printf->f_return += 1;
		}
}
