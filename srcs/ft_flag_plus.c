/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_plus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:46:24 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 09:46:25 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_flag_plus(t_printf *my_printf)
{
	if (my_printf->flag_plus == -1)
		ft_putchar('-');
	else if (my_printf->flag_plus == 1)
		ft_putchar('+');
	if (my_printf->flag_plus == 1 || my_printf->flag_plus == 1)
		my_printf->f_return++;
	if (my_printf->flag_zero == 1 && my_printf->flag_plus != 0)
		my_printf->flag_plus = 2;
}
