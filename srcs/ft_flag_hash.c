/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_hash.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:44:31 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 09:48:08 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_flag_hash(t_printf *my_printf, char *str)
{
	if (my_printf->convert == 'o' && str[0] != '0' && my_printf->flag_hash == 1)
	{
		ft_putchar('0');
		my_printf->f_return++;
	}
	else if (my_printf->convert == 'x' && str[0] != '0' &&
			my_printf->flag_hash == 1)
	{
		ft_putstr("0x");
		my_printf->f_return += 2;
	}
	else if (my_printf->convert == 'X' && str[0] != '0' &&
			my_printf->flag_hash == 1)
	{
		ft_putstr("0X");
		my_printf->f_return += 2;
	}
}
