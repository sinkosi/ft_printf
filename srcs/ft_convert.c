/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 16:20:01 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/06 16:35:18 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_convert(t_printf *my_printf, va_list printf_list, char *str)
{
	//printf("char is %c\n", str[my_printf->i]);
	ft_flag_reset(my_printf);
	printf("char is %c\n", str[my_printf->i]);

	while (str[my_printf->i] != '\0' &&
			!(ft_strchr_bool(PARSE, str[my_printf->i])))
	{
		if (ft_strchr_bool(FLAGS, str[my_printf->i]))
			ft_flag_set(my_printf, str);
		my_printf->i += 1;
		printf("1.char is now %c\n", str[my_printf->i]);
	}
	if (ft_strchr_bool(PARSE, str[my_printf->i]))
	{
		my_printf->i += 1;
		my_printf->convert = str[my_printf->i];
		ft_handler_convert(my_printf, printf_list);
		printf("2.char is now %c\n", str[my_printf->i]);
	}
	else
		return ;
}
