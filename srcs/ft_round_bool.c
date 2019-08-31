#include "../includes/ft_printf.h"

int     ft_round_bool(double nbr)
{
    intmax_t num;

    num = nbr;
    nbr -= num;
    if (nbr >= 0.5)
        return (1);
    else
        return (0);    
}