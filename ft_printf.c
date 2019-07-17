#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	i;
	int	size;
	va_list	printflst;

	i = 0;
	size = 0;
	va_start(printflst, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			size += ft_print_char(format[i]);
		else
		{
			
