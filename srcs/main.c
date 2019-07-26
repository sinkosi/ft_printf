/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:17:44 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/22 11:35:55 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/ft_printf.h"
#include "../libft/includes/libft.h"

int	main(int argc, char **argv)
{
	char *str;
	char *filename;
	if (argc != 1)
		return (0);
	filename = argv[0];
	str = "These are words";
	printf("Le fichier{CYAN}%s{eoc} contien : {RED}%s{eoc}", filename, str);
	ft_putendl(RED"THIS IS A TEST");
	ft_putstr(RESET);
	ft_putendl("CAN I UNDERLINE THIS");
	ft_printf("LIKE THIS\n");
	ft_printf("print a number\n");
	printf("\n%10d", 123456789);
	printf("\n%010d\n", 123);
	return (0);
}
