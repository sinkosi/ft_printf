/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_set.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 11:49:34 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 11:49:35 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
** Set flag plus to one, do not incremement
 */
void	ft_flag_set(t_printf *my_printf, char *str)
{
	if (str[my_printf->i] == '-')
		my_printf->flag_minus = 1;
	else if (str[my_printf->i] == '+')
		my_printf->flag_plus = 1;
	else if (str[my_printf->i] == ' ')
		my_printf->flag_space += 1;
	else if (str[my_printf->i] == '#')
		my_printf->flag_hash += 1;
	else if (str[my_printf->i] == '0' && (ft_isdigit(str[my_printf->i] == 0)))
		my_printf->flag_zero += 1;
	else if (str[my_printf->i] == 'h')
		my_printf->h += 1;
	else if (str[my_printf->i] == 'l')
		my_printf->l += 1;
	else if (str[my_printf->i] == 'j')
		my_printf->j = 1;
	else if (str[my_printf->i] == 'z')
		my_printf->z = 1;
}
