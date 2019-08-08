/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_space.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:43:53 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 09:43:55 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_flag_space(t_printf *my_printf)
{
	printf("ft_flag_space.c: Do we get this far?\n");
	if (my_printf->flag_space == 1 && my_printf->flag_plus == 0)
	{
		ft_putchar(' ');
		my_printf->f_return += 1;
	}
}
