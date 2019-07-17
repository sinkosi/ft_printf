/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 07:52:19 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/25 17:29:52 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(char *str, const char *delim)
{
	static char *i;

	i = 0;
	if (str != NULL)
		i = str;
	else if (i == NULL)
		return (NULL);
	str = i + ft_strspn(i, delim);
	i = str + ft_strcspn(str, delim);
	if (i == str)
	{
		i = 0;
		return (i);
	}
	(i = NULL);
	return (str);
}
