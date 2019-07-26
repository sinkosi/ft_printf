/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:19:50 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/17 11:19:53 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_s_str(t_printf *my_printf, char *str)
{
	char	*null;

	null = "(null)";
	if (str != NULL)
	{
		ft_flag_size(my_printf, ft_strlen(str));
		ft_flag_width(my_printf);
		ft_flag_precision(my_printf, str);
		ft_putstr(str);
		my_printf->f_return += ft_strlen(str);
		ft_flag_width(my_printf);
	}
	else
	{
		ft_flag_size(my_printf, ft_strlen(null));
		ft_flag_width(my_printf);
		ft_flag_precision(my_printf, null);
		ft_putstr(null);
		my_printf->f_return += ft_strlen(null);
		ft_flag_width(my_printf);
	}
}
