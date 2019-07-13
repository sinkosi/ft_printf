#include <stdio.h>
#include "ft_printf.h"
//#include "./libft/libft.h"

int main(int argc, char **argv)
{
	char *str;
	char *filename;

	filename = argv[0];
	str = "These are words";
	//printf("Le fichier{CYAN}%s{eoc} contien : {RED}%s{eoc}", filename, str);
	ft_putendl(RED"THIS IS A TEST");
	ft_putstr(eoc);
	ft_putendl("CAN I UNDERLINE THIS");
	return (0);
}
