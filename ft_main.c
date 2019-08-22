/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:17:44 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/06 16:25:40 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./includes/ft_printf.h"
#include "./libft/includes/libft.h"
/*
int	main(int argc, char **argv)
{
	char *str;
	char *filename;

	if (argc != 1)
		return (0);
	filename = argv[0];
	str = "These are words";
printf("Le fichier{CYAN}%s{eoc} contien : {RED}%s{eoc}", filename, str);
	ft_printf(RED"THIS IS A TEST");
	ft_printf(RESET);
	ft_printf("CAN I UNDERLINE THIS");
	ft_printf("LIKE THIS\n");
	ft_printf("print a number\n");
	ft_printf("\n%10d", 123456789);
	ft_printf("\n%010d\n", 123);
	ft_printf("%s\n", filename);
	return (0);
}
*/

#include <errno.h>

int main()
{
  	/*int my_integer = -42;
  	unsigned int my_ui = 23;
  	float my_float = 3.56;
  	double my_double = 424242.171717;
  	char my_char = 'w';
  	char my_string[] = "Pardon me, may I borrow your nose?";

	ft_printf ("Integer: %d\n", my_integer);
  	printf ("Integer: %d\n", my_integer);
  	ft_printf ("Unsigned integer: %u\n", my_ui);
	printf ("Unsigned integer: %u\n", my_ui);

	ft_printf ("The same, as hexadecimal: %#x %#x\n", my_integer, my_ui);
	printf ("The same, as hexadecimal: %#x %#x\n", my_integer, my_ui);
	char	m = 'f' - '2' + 48;
	char	n = 'f' - 'a' + 48 + 1;
	ft_printf("%c%c\n", m, n);
	ft_printf("%105c", 42);

	ft_printf ("Floating-point: %f\n", my_float);
	ft_printf ("Double, exponential notation: %17.11e\n", my_double);

	ft_printf ("Single character: %c\n", my_char);
	ft_printf ("String: %s\n", my_string);

  	errno = EACCES;
  	ft_printf ("errno string (EACCES): %m\n");*/

	/*ft_printf("%x\n", -42);
	printf("%x\n", -42);
	ft_printf("%X\n", -42);
	printf("%X", -42);*/
//	ft_printf("%-#6o\n", 2500);
//	printf("%-#6o\n", 2500);
	//ft_printf("%-5.10o\n", 2500);
	//ft_printf("%-10.5o\n", 2500);
	//ft_printf("%-05o", 2500);
	//ft_printf("% 10.5d", 4242);
	//ft_printf("%.2s is a string\n", "this");
	//printf("%.2s is a string\n", "this");
	ft_printf("%5.2s is a string\n", "this");
	printf("%5.2s is a string\n", "this");
	return 0;
}
/*
The code example above produces the following output on a GNU system:

Integer: -42
Unsigned integer: 23
The same, as hexadecimal: 0xffffffd6 0x17
Floating-point: 3.560000
Double, exponential notation: 4.24242171717e+05
Single character: w
String: Pardon me, may I borrow your nose?
errno string (EACCES): Permission denied
*/
