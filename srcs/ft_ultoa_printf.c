/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 08:42:14 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/07 08:46:05 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	ft_num_ulen(uintmax_t n, int base)
{
	size_t	i;

	i = 0;
	while (n /= base)
		i++;
	return (i + 1);
}

char			*ft_ultoa(uintmax_t n, int base)
{
	size_t		i;
	uintmax_t	tmp;
	char		*str;

	i = 0;
	tmp = 0;
	str = "0\0";
	return (str);
}
