/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 16:10:10 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/29 16:11:48 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putwstr_fd(wchar_t *wstr, int fd)
{
	size_t	i;

	i = 0;
	while (wstr[i] != '\0')
	{
		ft_putwchar_fd(wstr[i], fd);
		i++;
	}
}
