#include "../includes/ft_printf.h"

static size_t   ft_num_ulen(uintmax_t n, int base)
{
    size_t  i;

    i = 0;
    while (n /= base)
        i++;
    return (i + 1);
}

char    *ft_ultoa(uintmax_t n, int base)
{
    size_t  i;
    uintmax_t   tmp;
    char    *new;
    
}