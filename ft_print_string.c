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

#include "ft_printf.h"

int	ft_print_str(char *str, int precision_point)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	if (str == NULL)
		return (ft_print_str("(null)", precision_point));
	while (str[i] != '\0' && precision_point > 0)
	{
		size += ft_print_char(str[i]);
		i++;
	}
	return (size);
}
