/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 11:51:44 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/07 08:40:19 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_flag_size(t_printf *my_printf, size_t len)
{
	char	c;

	c = my_printf->convert;
	my_printf->prec_len -= len;
	my_printf->format_word -= len;
	if (my_printf->flag_space == 1 && my_printf->flag_plus == 0 &&
			(c == 'i' || c == 'd'))
		my_printf->format_word -= 1;
	if (my_printf->flag_plus != 0 && (c == 'i' || c == 'd'))
		my_printf->format_word -= 1;
	if ((my_printf->precision == 1 && my_printf->prec_len > 0) &&
		((c == 'i' || c == 'd' || c == 'x' || c == 'X' || c == 'o')
		|| c == 'O' || c == 'p' || c == 'u' || c == 'U'))
		my_printf->format_word -= my_printf->prec_len;
	if (my_printf->flag_hash == 1 && (c == 'o' || c == 'O') &&
			my_printf->prec_len <= 0)
		my_printf->format_word -= 1;
	else if (my_printf->flag_hash == 1 && (c == 'x' || c == 'X'))
		my_printf->format_word -= 2;
}
