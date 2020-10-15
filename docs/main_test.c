#include "./includes/ft_printf.h"
#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv)
{	
	ft_putendl("This is the Main for testing ft_printf\n");
	//CHAR
	ft_putendl("TEST 1: %c CHAR");
	char a = 'a';
	ft_printf("We will pass the char A by variable :%c\n", a);
	ft_printf("Now we pass the char by declaration :%c\n", 'b');
	ft_printf("Watch as I pass the char by integer :%c\n", 67);
	ft_printf("we will pass the value by function  :%c\n", ft_tolower(68));
	ft_printf("The next thing is field width       :%5c!\n", 69);
	ft_printf("Now we will left align our output   :%-5c!\n", 70);

	//STR
	ft_putendl("\nTEST 2: %s STRINGS");
	char *str = "Username";
	ft_printf("Please enter your :%s\n", str);
	ft_printf("Pass string by    :%s\n", "words");
	ft_printf("Test field width  :%15s!\n", "Field is?");
	ft_printf("Now left-alignment:%-15s!\n", "On the left?");
	ft_printf("Check precsion to :%-15.6s!\n", "Shortened");
	ft_printf("%.2s is a string\n", "this");
	ft_printf("%5.2s is a string\n", "this");

 	int my_integer = -42;
  	unsigned int my_ui = 230;
  	float my_float = 3.56;
  	double my_double = 424242.171717;
	//DECIMAL || INT
	ft_putendl("\nTEST 3: %d & %i Decimals & Integers");
	ft_printf("Width(10) and precision( 5):\t|% 10.5d|\n", 4242);
	ft_printf("Width( 4) and precision(15):\t|%4.15d|\n", 42);
	ft_printf("Width(05) and precision( 0):\t|%05d|\n", 42);
	ft_printf("Width( 5) and precision( 0):\t|%5d|\n", 42);
	ft_printf("Int min test (long): %ld\n", -2147483648);
	ft_printf("Long max test (long long): %lld\n", 9223372036854775807);
	
	//Octal
	ft_putendl("\nTEST 4: %o Octals");
	ft_printf("Octal| Width(-5) & precision(10):\t|%-5.10o|\n", 2500);
	ft_printf("Octal| Width(10) & precision( 5):\t|%-10.5o|\n", 2500);
	ft_printf("Octal| Width(-05) & precision( ):\t|%-05o|\n", 2500);
	ft_printf("Octal| Width( 6) with hash & -  :\t|%-#6o|\n", 2500);

	//Unsigned Int
	ft_putendl("\nTEST 5: %u Unsigned Int");
	ft_printf ("Unsigned integer: %u\n", my_ui);
  	ft_printf ("Unsigned integer: %U\n", (my_ui * 10));
	ft_printf ("Unsigned integer: %U\n", (my_ui * -1));
	//printf ("Unsigned integer: %u\n", (my_ui * -1));
	//Check this stuff out

	//Hexadecimal
	ft_putendl("\nTEST 6: %x Hexadecimal");
	ft_printf("%x\n", 42);
	ft_printf("%X\n", 42);
	ft_printf("%x\n", -42);
	ft_printf("%X\n", -42);
	ft_printf("%lx\n", 4294967295);
	ft_printf("%lx\n", -4294967295);
	ft_printf("%#X\n", 42);
	ft_printf("%#x\n", -42);

	//FLOAT
	ft_putendl("\nTEST 7: %f Float");
	ft_printf("This is a float number test %lf\n", 452.365);
	ft_printf("This is a float number test %lf\n", -5452.365);
	ft_printf("This is a float L number test %Lf\n", -5452.365456789L);
	ft_printf("This is a float precision test %.3lf\n", 452.3651);

	//BINARY
	ft_putendl("\nTEST 8: %b Binary");
	ft_printf("The binary for 5 is %b\n", 5);
	ft_printf("The binary for 42 is %B\n", 42);
	ft_printf("The binary for -7 is %B\n", -7);
	ft_printf("The binary for 2800 is %b\n", 2800);

	//POINTERS
	ft_putendl("\nTEST 9: %p Pointers");
	ft_printf("The memory address of 'my_ui is = %P\n", &my_ui);
	ft_printf("The memory address of 'my_float' is = %P\n", &my_float);
	ft_printf("The memory address of 'my_double' is = %p\n", &my_double);
	ft_printf("The memory address of 'my_char \"a\"' is = %P\n", &a);
	ft_printf("And finally the address of 'str' is %p\n", &str);
	
	//WIDE-CHAR
	ft_putendl("\nTEST 10: %C Wide-Char");
	printf("%d\n", 0xE5);
	printf("%C\n", 0xE5);
	ft_printf("This is the output when passed int 65:\t%C\n", 65);
	ft_printf("This is the output when passed int 188:\t%C\n", 188);
	ft_printf("This is the output when passed int 245:\t%C\n", 245);
	ft_printf("This is the output when passed int 229:\t%C\n", 229);
	ft_printf("This is the output when passed oct 345:\t%C\n", 0345);
	ft_printf("This is the output when passed hex xE5:\t%C\n", 0xE5);

	//WIDE-STR
	ft_putendl("\nTEST 10: %C Wide-Str");
	wchar_t caps[] = {229, 188, 65, 229};
	ft_printf("This is a Wide-Str %S and it's cool\n", caps);

	//COLOURS
	ft_putendl("\nTEST OF THE EPIC, The Coup-De-Gras - COLOUR");
	ft_printf("This should %sprint in %sRED!\n", M_RED, M_RESET);
	ft_printf("This should %sprint in %sGREEN!\n", M_GREEN, M_RESET);
	ft_printf("This should %sprint in %sYELLOW!\n", M_YELLOW, M_RESET);
	ft_printf("This should %sprint in %sBLUE!\n", M_BLUE, M_RESET);
	ft_printf("This should %sprint in %sMAGENTA!\n", M_MAGENTA, M_RESET);
	ft_printf("This should %sprint in %sCYAN!\n", M_CYAN, M_RESET);
	return(0);
}