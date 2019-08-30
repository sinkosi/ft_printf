/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power_ten.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 12:40:52 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/30 12:41:05 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

intmax_t	ft_power_ten(double nb, int power)
{
	intmax_t ten;

	ten = 10;
	if (power < 0)
		return (-1);
	else if (power == 0)
		return (1);
	else
		ten = ft_power(ten, power);
	return (nb * ten);
}
