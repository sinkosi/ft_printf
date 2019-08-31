#include "./includes/ft_printf.h"
#include <inttypes.h>

int main(void)
{
	/*ft_putstr("A\n");
	ft_putchar(65);
	ft_putchar('\n');
	ft_putwchar(128);
	ft_putchar('\n');*/

	ft_putstr("Now we test, rounding off numbers\n");
	ft_putnbr(ft_round_bool(450.51));
	ft_putchar('\n');
	ft_putnbr(ft_round_bool(450.49));
	ft_putchar('\n');
	ft_printf("This is a float on ft = %f\n", 456.589);
	printf("This is a float on pf = %f\n", 456.589);

	return(0);
}