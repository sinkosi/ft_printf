#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <wchar.h>
# include <stdio.h>

/*
** FT_PRINTF - go to wikipedia printf page and the IBM printf page
**
**
** ****************************************************************************	*
**					COLOURS					*
** ****************************************************************************	*
*/

# define eoc	"\033[0m"
# define RED	"\033[31m"
# define GREEN	"\033[32m"
# define YELLOW	"\033[33m"
# define BLUE	"\033[34m"
# define MAGENTA "\033[35m"
# define CYAN	"\033[36m"

/*
** ****************************************************************************	*
**					STRUCTURE				*
** ****************************************************************************	*
*/
typedef struct s_printf
{
	char	*flags;
	short	width;
	short	precision_pointer;
	short	size;
	char	hh;
	char	h;
	char	l;
	char	z;
	char	ll;
	char	j;
}		t_printf;

int		ft_printf(const char *format, ...);

/*
** ****************************************************************************	*
**					HANDLERS				*
** ****************************************************************************	*
*/
/*
** ft_char_handler - This is the handler for the char character. It parses the
**	the input into ft_printf and handles the char and only the char leaving
**	the string remainder on 0++;
*/
int	ft_char_handler(t_printf *format, void *c);
int	ft_str_handler(t_printf *format, void *s);
int	ft_int_handler(t_printf *format, void *num);
int	ft_unsigned_int_handler(t_printf *format, void *num);
int	ft_hexadecimal_handler(t_printf *format, void *num);
int	ft_octal_handler(t_printf *format, void *num);
int	ft_pointer_handler(t_printf *format, void *num);

/*
** ****************************************************************************	*
**					PRINTERS				*
** ****************************************************************************	*
*/
/*
** ft_print_char - This function will print a char as given, or else it will
**	print its 'wide_char' equivalent.
*/
int	ft_print_char(int c);
int	ft_print_str(char *str, int precision_point);
int	ft_print_wchar(wchar_t c);
int	ft_print_wstr(wchar_t *str, int precision_point);
void	ft_print_

#endif
