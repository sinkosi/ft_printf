/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 16:19:44 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/19 16:20:53 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		size;
	va_list	printflst;

	i = 0;
	size = 0;
	va_start(printflst, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			size += ft_print_char(format[i]);
		else
		{
			i++;
			size += ft_convert(*format + i, printflst);
		}
		i++;
	}
	va_end(printflst);
	return (size);
}
