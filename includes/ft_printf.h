/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:51:35 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 13:57:11 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/includes/libft.h"
# include <wchar.h>
# include <stdio.h>
# include <stdarg.h>
#include <stdint.h>

/*
** ************************************************************************ *
**									MACROS									*
** ************************************************************************	*
*/
# define UINT_MAX 4294967295
# define FLAGS "hljz#0-+ ."
# define PARSE "cCdDioOpsSuUxX\%"

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
	int			flag_minus;
	int			flag_plus;
	int			flag_space;
	int			flag_hash;
	int			flag_zero;
	int			format_word;
	int			f_return;
	int			precision;
	int			prec_len;
	int			i;
	int			h;
	int			l;
	int			j;
	int			z;
	char		convert;
	//More definitions on https://linux.die.net/man/3/vfprintf
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
**	"%p"	pointer
**	"%%"	print a percent sign
**	"\%"	print a percent sign
*/

/*
** ************************************************************************	*
**									FLAG FUNCTIONS							*
** ************************************************************************	*
*/
/*
** FT_FLAG_SIZE - 
*/
void			ft_flag_size(t_printf *my_printf, size_t str_size);

/*
** FT_FLAG_WIDTH - 
*/
void			ft_flag_width(t_printf *my_printf);
void			ft_flag_precision(t_printf *my_printf, char *str);
void			ft_flag_plus(t_printf *my_printf);
void			ft_flag_hash(t_printf *my_printf, char *str);
void			ft_flag_space(t_printf *my_printf);

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
void			ft_handler_c_char(t_printf *my_printf, va_list printf_list);
void			ft_handler_d_int(t_printf *my_printf, va_list printf_list);
void			ft_handler_e_exponent(t_printf *my_printf, va_list printf_list);
void			ft_handler_f_float(t_printf *my_printf, va_list printf_list);
void			ft_handler_o_octal(t_printf *my_printf, va_list printf_list);
void			ft_handler_s_str(t_printf *my_printf, va_list printf_list);
void			ft_handler_u_unsigned_int(t_printf *my_printf,
		va_list printf_list);
void			ft_handler_x_hexadecimal(t_printf *my_printf,
		va_list printf_list);
void			ft_handler_xc_hexadecimal(t_printf *my_printf,
		va_list printf_list);
void			ft_handler_p_pointer(t_printf *my_printf, va_list printf_list);
void			ft_handler_convert(t_printf *my_printf, va_list printf_list);

/*
** ************************************************************************	*
**									PRINTERS								*
** ************************************************************************	*
*/
/*
** ft_print_char - This function will print a char as given, or else it will
**	print its 'wide_char' equivalent.
*/
void			ft_print_c_char(t_printf *my_printf, int c);
void			ft_print_d_int(t_printf *my_printf, intmax_t n);
void			ft_print_e_exponent(t_printf *my_printf, double n);
void			ft_print_f_float(t_printf *my_printf, float n);
void			ft_print_o_octal(t_printf *my_printf, unsigned long long n);
void			ft_print_s_str(t_printf *my_printf, char *str);
void			ft_print_u_unsigned_int(t_printf *my_printf, unsigned long long n);
void			ft_print_x_hexadecimal(t_printf *my_printf, unsigned long long n);
void			ft_print_xc_hexadecimal(t_printf *my_printf, unsigned long long n);
void			ft_print_p_pointer(t_printf *my_printf, void *pointer);
void			ft_print_mod(t_printf *my_printf);

/*
** ********************************************************************
*/
void			ft_print_out(t_printf *my_printf, char *str);
int				ft_printf(const char *format, ...);
void			ft_flag_check(t_printf *my_printf);
void			ft_convert(t_printf *my_printf, va_list printf_list, char *str);
void			ft_flag_precision(t_printf *my_printf, char *str);
void			ft_flag_set(t_printf *my_printf, char *str);
void			ft_flag_reset(t_printf *my_printf);
void			ft_error(char *str);

char			*ft_ltoa(intmax_t n);

#endif
