/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:33:36 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/25 15:55:34 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_strlchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (ft_isascii(c) == 0)
		return (-1);
	while (str[i] != c)
	{
		if (str[i] == '\0')
			return (-1);
		i++;
	}
	return (i);
}
