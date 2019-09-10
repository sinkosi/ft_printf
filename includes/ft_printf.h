/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:51:35 by sinkosi           #+#    #+#             */
/*   Updated: 2019/09/10 11:57:28 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/includes/libft.h"
# include <wchar.h>
# include <stdarg.h>
# include <inttypes.h>

/*
** ************************************************************************ *
**									MACROS									*
** ************************************************************************	*
*/
# define FLAGS "hlLjz#0-+ ."
# define PARSE "bBcCdDfFioOpPsSuUxX\%"

/*
** ************************************************************************ *
**									COLOURS									*
** ************************************************************************	*
*/

# define M_RESET	"\033[0m"
# define M_RED	"\033[31m"
# define M_GREEN	"\033[32m"
# define M_YELLOW	"\033[33m"
# define M_BLUE	"\033[34m"
# define M_MAGENTA "\033[35m"
# define M_CYAN	"\033[36m"

/*
** ************************************************************************	*
**									STRUCTURE								*
** ************************************************************************	*
*/
/*
** T_PRINTF - This structure holds all the variables that can either be turned
**		on or off regarding how to format the string that has been passed to it.
** FLAG_MINUS - If this flag is turned to 1. Then it means that the output
**		should be left-justified. The default is right justification.
** FLAG_PLUS - If this flag is turned to 1, it means prints a '+' ahead of the
**		number you wish to output. If it is -1, it means print a '-' ahead
**		of the number you wish to output.
** FLAG_SPACE
*/

typedef struct	s_printf
{
	int			flag_minus;
	int			flag_plus;
	int			flag_space;
	int			flag_hash;
	int			flag_zero;
	int			field_width;
	int			f_return;
	int			precision;
	int			prec_width;
	int			i;
	int			h;
	int			l;
	int			lc;
	int			j;
	int			z;
	char		convert;

}				t_printf;
/*
** More definitions on https://linux.die.net/man/3/vfprintf
*/

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
** FT_HANDLER_C_CHAR - This is the handler for the char character. It parses the
**		the input into ft_printf and handles the char and only the char leaving
**		the string remainder on 0++;
*/
void			ft_handler_c_char(t_printf *my_printf, va_list printf_list);

/*
** FT_HANDLER_D_INT - This is the handler for parsing integers. The function
**		does not only look at data types of type 'int' only. It will look for
**		integers of type char to type size_t.
*/
void			ft_handler_d_int(t_printf *my_printf, va_list printf_list);

/*
** FT_HANDLER_E_EXPONENT - This function has not been made.
*/
void			ft_handler_e_exponent(t_printf *my_printf, va_list printf_list);

/*
** FT_HANDLER_F_FLOAT - This is the function that handles floating point input.
**		The standard number is parsed as a Double or a LONG Double. The
**		handler parses the %f character with Flags such as l, ll or L & j.
*/
void			ft_handler_f_float(t_printf *my_printf, va_list printf_list);
/*
** FT_HANDLER_O_OCTAL - This is the handler for octal strings. The function
**		does not work with (ft_flag_hash), this function works with the %o
**		conversion method. Check ft_flag_hash for prefix on octal.
*/
void			ft_handler_o_octal(t_printf *my_printf, va_list printf_list);
/*
** FT_HANDLER_B_BINARY - This is the handler for binary strings. The function
**		will wait for a %B or %b flag and convert the base 10 input to base 2.
**		Conversion takes places using a form of *toa_base.
*/
void			ft_handler_b_binary(t_printf *my_printf, va_list printf_list);
/*
** FT_HANDLER_S_STR - This is the handler for strings, either with variables
**		or strings declared in the VA_LIST itself. The function uses a
**		ft_putstr from Libft, and updates the return using FT_STRLEN.
*/
void			ft_handler_s_str(t_printf *my_printf, va_list printf_list);
/*
** FT_HANDLER_U_UNSIGNED_INT - This is the handler for unsigned integers, it
**		checks the variable in the VA_LIST, to pass it to the appropriate,
**		print_handler, this is done by checking which flag is set or read.
*/
void			ft_handler_u_unsigned_int(t_printf *my_printf,
		va_list printf_list);
/*
** FT_HANDLER_X_HEXADECIMAL - This is the handler for the hexadecimal conversion
**		and it will check the integer that is parsed to it and call the print
**		function that is appropriate for its data-type. The print will return
**		lowercase output.
*/
void			ft_handler_x_hexadecimal(t_printf *my_printf,
		va_list printf_list);

/*
** FT_HANDLER_P_POINTER - This is the handler for printing out a pointer.
**		This code is very basic and similar code exists in libft. The handler
**		is passed a data structure of type "(void *)", this is then cast
**		explicity to a data type that may output to the standard output.
*/
void			ft_handler_p_pointer(t_printf *my_printf, va_list printf_list);
/*
** FT_HANDLER_CONVERT - This is one of the most imperative functions that exist
**		within ft_printf. The purpose of this function is to obtain the identity
**		of the format character. Upon obtaining this, the function calls the
**		appropriate handler. i.e hexadecimal, octal, string, int etc.
*/
void			ft_handler_convert(t_printf *my_printf, va_list printf_list);

/*
** ************************************************************************	*
**									PRINTERS								*
** ************************************************************************	*
*/
/*
** FT_PRINT_C_CHAR - This function will print a char as given or parsed by
**		variable.
*/
void			ft_print_c_char(t_printf *my_printf, int c);

/*
** FT_PRINT_D_INT - This function will be called by the ft_handler_d_int
**		function and print an integer and update the return using the STRLEN
**		of the number. The integer is converted to a string prior to output
**		occurring.
*/
void			ft_print_d_int(t_printf *my_printf, intmax_t n);

/*
** FT_PRINT_E_EXPONENT - This function has not been done.
*/
void			ft_print_e_exponent(t_printf *my_printf, double n);

/*
** FT_PRINT_F_FLOAT - This function is called by the ft_handler_f_float.
**		It works by taking the data-type passed to it. Either a float, double
**		or a long double. It works by casting the significand to one string.
**		It will then use a function that calculates the mantissa beyond the
**		radix and storing it in a second string. It then outputs each string
**		with the radix as the seperator. It takes the length of the output
**		and updates the value in the struct 'f_return'.
*/
void			ft_print_f_float(t_printf *my_printf, double n);

/*
** FT_PRINT_O_OCTAL - This function will be called by the ft_handler_o_octal
**		function and print an octal number. The function will convert the
**		inital integer to base 8 and store the value in a data structure of
**		type string(char *) and update the return using the	FT_STRLEN of the
**		string.
*/
void			ft_print_o_octal(t_printf *my_printf, uintmax_t n);

void			ft_print_b_binary(t_printf *my_printf, uintmax_t n);

/*
** FT_PRINT_S_STR - This function will be called by the ft_handler_s_str
**		function and it will operate in the same manner as an FT_PUTSTR, which
**		can be found in the LIBFT Library. This function has a strong precision
**		limiter. The call to precision within this function will cause the
**		string (char *) to be truncated. The value F_RETURN contained in the
**		struct is updated with the FT_STRLEN of the output string.
*/
void			ft_print_s_str(t_printf *my_printf, char *str);
void			ft_print_ws_str(t_printf *my_printf, wchar_t *str);
void			ft_print_u_unsigned_int(t_printf *my_printf, uintmax_t n);
void			ft_print_x_hexadecimal(t_printf *my_printf, uintmax_t n);

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

char			*ft_ltoa_printf(intmax_t nbr);
char			*ft_ultoa(uintmax_t nbr, int base);
char			*ft_ltoa_base(intmax_t value, int base);

void			ft_putwchar(wchar_t wc);

void			ft_putwstr(wchar_t *wstr);

intmax_t		ft_power_ten(double nb, int power);
void			ft_print_lf_float(t_printf *my_printf, long double n);
int				ft_round_bool(double nbr);

/*
** ************************************************************************	*
**									FILE DESCRIPTORS						*
** ************************************************************************	*
*/

void			ft_putwchar_fd(wchar_t wc, int fd);
void			ft_putwstr_fd(wchar_t *wstr, int fd);
void			ft_flag_hash_fd(t_printf *my_printf, char *str, int fd);
void			ft_flag_plus_fd(t_printf *my_printf, int fd);
void			ft_flag_precision_fd(t_printf *my_printf, char *str, int fd);
void			ft_flag_space_fd(t_printf *my_printf, int fd);
void			ft_flag_width_fd(t_printf *my_printf, int fd);
void			ft_print_b_binary_fd(t_printf *my_printf, uintmax_t n,
		int fd);
void			ft_print_c_char_fd(t_printf *my_printf, int c, int fd);
void			ft_print_d_int_fd(t_printf *my_printf, intmax_t n, int fd);
void			ft_print_f_float_fd(t_printf *my_printf, double n, int fd);
void			ft_print_lf_float_fd(t_printf *my_printf, long double n,
		int fd);
void			ft_print_mod_fd(t_printf *my_printf, int fd);
void			ft_print_out_fd(t_printf *my_printf, char *str, int fd);
void			ft_print_o_octal_fd(t_printf *my_printf, uintmax_t n, int fd);
void			ft_print_p_pointer_fd(t_printf *my_printf, void *pointer,
		int fd);
void			ft_print_s_str_fd(t_printf *my_printf, char *str, int fd);
void			ft_print_u_unsigned_int_fd(t_printf *my_printf, uintmax_t n,
		int fd);
void			ft_print_ws_str_fd(t_printf *my_printf, wchar_t *str, int fd);
void			ft_print_x_hexadecimal_fd(t_printf *my_printf, uintmax_t n,
		int fd);
int				ft_dprintf(int fd, const char *parse_str, ...);
void			ft_convert_fd(t_printf *my_printf, va_list printf_list,
		char *str, int fd);
void			ft_handler_convert_fd(t_printf *my_printf,
		va_list printf_list, int fd);
void			ft_handler_b_binary_fd(t_printf *my_printf,
		va_list printf_list, int fd);
void			ft_handler_c_char_fd(t_printf *my_printf, va_list printf_list,
		int fd);
void			ft_handler_d_int_fd(t_printf *my_printf, va_list printf_list,
		int fd);
void			ft_handler_f_float_fd(t_printf *my_printf,
		va_list printf_list, int fd);

void			ft_handler_o_octal_fd(t_printf *my_printf, va_list printf_list,
		int fd);
void			ft_handler_p_pointer_fd(t_printf *my_printf,
		va_list printf_listi, int fd);
void			ft_handler_s_str_fd(t_printf *my_printf, va_list printf_list,
		int fd);
void			ft_handler_x_hexadecimal_fd(t_printf *my_printf,
		va_list printf_list, int fd);

void			ft_handler_u_unsigned_int_fd(t_printf *my_printf,
		va_list printf_list, int fd);

#endif
