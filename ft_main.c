/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:17:44 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/28 11:15:52 by sinkosi          ###   ########.fr       */
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
  	int my_integer = -42;
  	unsigned int my_ui = 23;
  	float my_float = 3.56;
  	double my_double = 424242.171717;
  	char my_char = 'w';
  	char my_string[] = "Pardon me, may I borrow your nose?";

	/*ft_printf ("Integer: %d\n", my_integer);
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
	//ft_printf("%5.2s is a string\n", "this");
	//printf("%5.2s is a string\n", "this");
	//ft_printf("%hd\n", 32768);
	//ft_printf("%hhd", -129);
	//ft_printf("%lx\n", 4294967296);
	//ft_printf("The binary for 5 is %b\n", 5);
	//ft_printf("The binary for 42 is %B\n", 42);
	//ft_putendl("NOW WE WILL PRINT MEMORY ADDRESSES");
	//void *my_mem = &my_integer;
	//printf("The memory address of 'my_integer' is = %p\n", &my_integer);
	ft_printf("The memory address of 'my_integer' is = %P\n", &my_integer);
	//printf("The memory address of 'my_integer' is = %p", &my_integer);
	ft_printf("The memory address of 'my_ui is = %p\n", &my_ui);
	/*ft_printf("The memory address of 'my_float' is = %p\n", &my_float);
	ft_printf("The memory address of 'my_double' is = %p\n", &my_double);
	ft_printf("The memory address of 'my_char' is = %p\n", &my_char);
	ft_printf("And finally the address of 'my_string' is %p\n", &my_string);*/
	//ft_printf("THESE ARE WORDS  and also %% \n");
	/*int m = 0;
	char *fok = "Is the a slash in \% this sentence";
	ft_putendl(fok);
	m = ft_strchr_bool(fok, '\%');
	ft_putnbr(m);*/
	/*ft_printf("% 10.5d\n", 4242);
	printf("% 10.5d\n", 4242);
	ft_printf("%4.15d\n", 42);
	printf("%4.15d\n", 42);
	ft_printf("%05d\n", 42);
	printf("%05d\n", 42);
	ft_printf("%5d\n", 42);
	printf("%5d\n", 42);*/

	/*ft_printf("%ld\n", -2147483648);
	ft_printf("%lld\n", 9223372036854775807);
	ft_printf("Large X %X\n", 42);
	ft_printf("Large X & # %#X\n", 42);
	ft_printf("small x %x\n", 42);
	ft_printf("small x & # %#x\n", 42);
	printf("What the f is D %f\n", 545.4524);
	printf("%d\n", 0xE5);
	printf("%C\n", 0xE5);
	ft_printf("%c\n", 65);
	ft_printf("%C\n", 229);
	printf("This is a Capital s%S", "tring\n");
	ft_printf("This is a Capital s%S", "tring\n");*/
	printf("It is time to build floating point numbers!\n");
	ft_printf("Letstry something %f\n", 45125.265);
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
