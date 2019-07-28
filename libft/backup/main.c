/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:12:08 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/09 16:21:02 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "./includes/libft.h"

int	main(void)
{
	char *output;
	char a;
	char b;
	char c;

	c = 'a';
	a = 'A';
	b = 'b';
	output = ("\n<<<SUCCESS>>>\n\n");
	ft_putstr("This is a test file to check some functions");
	ft_putstr("contained in the library, libft.h\n");
	ft_putendl("The first test will check islower,isupper,tolower and toupper");
	test_01(a);
	test_01(b);
	ft_putstr(output);
	test_02(a);
	test_02(b);
	test_02(c);
	ft_putstr(output);
	return (0);
}
