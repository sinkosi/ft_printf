/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:17:44 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/17 13:23:49 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "./libft/libft.h"

int	main(int argc, char **argv)
{
	char *str;
	char *filename;

	filename = argv[0];
	str = "These are words";
	printf("Le fichier{CYAN}%s{eoc} contien : {RED}%s{eoc}", filename, str);
	ft_putendl(RED"THIS IS A TEST");
	ft_putstr(RESET);
	ft_putendl("CAN I UNDERLINE THIS");
	ft_print_str("LIKE THIS\n", 1);
	ft_printf("print a number\n");
	return (0);
}
