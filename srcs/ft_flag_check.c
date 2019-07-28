/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:42:53 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 15:00:42 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_flag_check(t_printf *my_printf)
{
	char *err1;
	char *err2;

	err1 = ("\nERROR: FLAG ERROR");
	err2 = ("\nERROR: CONFLICT DETECTED");
	if (my_printf->h > 2 || my_printf->l > 2 || my_printf->j > 1
			|| my_printf->z > 1 || my_printf->flag_hash > 1
			|| my_printf->flag_zero > 1 || my_printf->flag_minus > 1
			|| my_printf->flag_plus > 1 || my_printf->precision > 1)
		ft_error(err1);
	else if ((my_printf->h > 0) && (my_printf->l > 0 || my_printf->j > 0
			|| my_printf->z > 0))
		ft_error(err2);
	else if ((my_printf->l > 0) && (my_printf->h > 0 || my_printf->j > 0
			|| my_printf->z > 0))
		ft_error(err2);
	else if ((my_printf->j > 0) && (my_printf->l > 0 || my_printf->h > 0
			|| my_printf->z > 0))
		ft_error(err2);
	else if ((my_printf->z > 0) && (my_printf->h > 0 || my_printf->l > 0
			|| my_printf->j > 0))
		ft_error(err2);
}
