/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 14:56:45 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/29 16:06:41 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putwchar_fd(wchar_t wc, int fd)
{
	if (wc <= 127)
		ft_putchar_fd(wc, fd);
	else if (wc <= 2047)
	{
		ft_putchar_fd(((wc >> 6) + 0xC0), fd);
		ft_putchar_fd(((wc & 0x3F) + 0x80), fd);
	}
	else if (wc <= 65535)
	{
		ft_putchar_fd(((wc >> 12) + 0xE0), fd);
		ft_putchar_fd((((wc >> 6) & 0x3F) + 0x80), fd);
		ft_putchar_fd(((wc & 0x3F) + 0x80), fd);
	}
	else if (wc <= 1114111)
	{
		ft_putchar_fd(((wc >> 18) + 0xF0), fd);
		ft_putchar_fd((((wc >> 12) & 0x3F) + 0x80), fd);
		ft_putchar_fd((((wc >> 6) & 0x3F) + 0x80), fd);
		ft_putchar_fd(((wc & 0x3F) + 0x80), fd);
	}
}
