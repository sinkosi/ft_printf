/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:51:35 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/22 11:15:21 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/includes/libft.h"
# include <wchar.h>
# include <stdio.h>

/*
** ************************************************************************ *
**									COLOURS									*
** ************************************************************************	*
*/

# define RESET	"\033[0m"
# define RED	"\033[31m"
# define GREEN	"\033[32m"
# define YELLOW	"\033[33m"
# define BLUE	"\033[34m"
# define MAGENTA "\033[35m"
# define CYAN	"\033[36m"

/*
** ************************************************************************	*
**									STRUCTURE								*
** ************************************************************************	*
*/

typedef struct	s_printf
{
	char	*format;
	short	width;
	short	precision_pointer;
	short	size;
	char	hh;
	char	h;
	char	l;
	char	z;
	char	ll;
	char	j;
	char	specifier;
}				t_printf;

/*
** FT_PRINTF - writes the argument operands to standard output, formatted
**		according to the format operand. Format is a format string that is
**		composed of conversion specifications that convert and add the next
**		argument to the output. format can contain backslash-escape sequences.
**		Conversion specifications have the form:
** **********************************
**	%[flag][width][precision][char]	*
** **********************************
**	%FLAG is one of the following options:
**
**	'-'	- Left-justifies the field; default is right justification.
**
**	'+' - Always prefixes a signed value with a sign (+ or -).
**
**	' '/space - Reserves a character position at the start of the string for the
**		minus sign (for negative numbers) or a space (for positive numbers). If
**		both space and - appear as flags, the space flag is ignored.
**
**	'#' - Prefixes octal values with 0 and hexadecimal values with 0x or 0X.
**		For floating-point values, this causes the decimal point always to be
**		displayed even if no characters follow it.
**	'0' - Pads numeric values with leading zeros. If both 0 and - appear as
**		flags, the 0 flag is ignored.
**
**	%WIDTH is the minimum field width of the output field. If the converted
**		value is shorter than the minimum width, ft_printf pads it with spaces
**		or zeros.
**
**	%PRECISION - In a string, precision is the maximum number of bytes to be
**		printed from the string; in a number, the precision is the number of
**		digits to be printed to right of the decimal point in a floating-point
**		value. width or precision can be specified as *, in which case the value
**		is read from the next argument, which must be an integer.
**
**	%CHAR - Each field of the format specification is discussed in detail below.
**		If a percent sign (%) is followed by a character that has no meaning as
**		a format field, the behavior is undefined. One exception to this
**		behavior is %%. To print a percent-sign character, use %%.
**	The type characters and their meanings are given in the following table:
**	"%c"	character
**	"%d"	decimal (integer) number (base 10)
**	"%e"	exponential floating-point number
**	"%f"	floating-point number
**	"%i"	integer (base 10)
**	"%o"	octal number (base 8)
**	"%s"	a string of characters
**	"%u"	unsigned decimal (integer) number
**	"%x"	number in hexadecimal (base 16)
**	"%%"	print a percent sign
**	"\%"	print a percent sign
*/

int				ft_printf(const char *format, ...);

/*
** ************************************************************************	*
**									HANDLERS								*
** ************************************************************************	*
*/
/*
** ft_char_handler - This is the handler for the char character. It parses the
**	the input into ft_printf and handles the char and only the char leaving
**	the string remainder on 0++;
*/
int				ft_char_handler(t_printf *format, void *c);
int				ft_str_handler(t_printf *format, void *s);
int				ft_int_handler(t_printf *format, void *num);
int				ft_unsigned_int_handler(t_printf *format, void *num);
int				ft_hexadecimal_handler(t_printf *format, void *num);
int				ft_octal_handler(t_printf *format, void *num);
int				ft_pointer_handler(t_printf *format, void *num);

/*
** ************************************************************************	*
**									PRINTERS								*
** ************************************************************************	*
*/
/*
** ft_print_char - This function will print a char as given, or else it will
**	print its 'wide_char' equivalent.
*/
int				ft_print_char(int c);
int				ft_print_str(char *str, int precision_point);
int				ft_print_wchar(wchar_t c);
int				ft_print_wstr(wchar_t *str, int precision_point);
void			ft_print_width(int space);
int				ft_convert(char **format, va_list printflst);

#endif
