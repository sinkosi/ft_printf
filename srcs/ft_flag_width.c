/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:41:05 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/07 08:49:56 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_flag_width(t_printf *my_printf)
{
	//printf("\nft_flag_width->flag_minus = %d\n", my_printf->flag_minus);
	//printf("\nft_flag_width->field_width = %d\n", my_printf->field_width);
	//printf("\nft_flag_width->flag_zero = %d\n", my_printf->flag_zero);
	if (my_printf->flag_minus == 1)
	{
		/*while (my_printf->field_width > 0)
		{
			ft_putchar(' ');
			my_printf->f_return += 1;
			my_printf->field_width -= 1;
		}
		//printf("ft_flag_width.c - FIRST IF STATEMENT\n");*/
		my_printf->flag_minus = 2;
	}
	else if (my_printf->flag_minus == 0 || my_printf->flag_minus == 2)
	{
		//printf("ft_flag_width -> else if statement my_printf->flag_zero = %d", my_printf->flag_zero);
		if (my_printf->flag_zero == 1 && my_printf->precision == 0
				&& my_printf->flag_minus == 0)
		{
		//	printf("ft_flag_width.c - IF Statement\n");
			ft_flag_plus(my_printf);
			while (my_printf->field_width > 0)
			{
				ft_putchar('0');
				my_printf->f_return += 1;
				my_printf->field_width -= 1;
			}
		}
		else
			//printf("ft_flag_width.c - ELSE LOOP\n");
			while (my_printf->field_width > 0)
			{
				ft_putchar(' ');
				my_printf->f_return += 1;
				my_printf->field_width -= 1;
			}
	}
}
