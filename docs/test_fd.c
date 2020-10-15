#include "./includes/ft_printf.h"
#include <fcntl.h>

int main(void)
{  
   int file;  
   file = open("file.txt", O_WRONLY);//opening file  
   ft_dprintf(file, "Hello file by fprintf over_write...\n");//writing data into file 
   	ft_putendl_fd("This is the Main for testing ft_printf\n", file);
	//CHAR
	ft_putendl_fd("TEST 1: %c CHAR", file);
	char a = 'a';
	ft_dprintf(file, "We will pass the char A by variable :%c\n", a);
	ft_dprintf(file, "Now we pass the char by declaration :%c\n", 'b');
	ft_dprintf(file, "Watch as I pass the char by integer :%c\n", 67);
	ft_dprintf(file, "we will pass the value by function  :%c\n", ft_tolower(68));
	ft_dprintf(file, "The next thing is field width       :%5c!\n", 69);
	ft_dprintf(file, "Now we will left align our output   :%-5c!\n", 70);

	//STR
	ft_putendl_fd("\nTEST 2: %s STRINGS", file);
	char *str = "Username";
	ft_dprintf(file, "Please enter your :%s\n", str);
	ft_dprintf(file, "Pass string by    :%s\n", "words");
	ft_dprintf(file, "Test field width  :%15s!\n", "Field is?");
	ft_dprintf(file, "Now left-alignment:%-15s!\n", "On the left?");
	ft_dprintf(file, "Check precision to:%-15.6s!\n", "Shortened");
	ft_dprintf(file, "%.2s is a string\n", "this");
	ft_dprintf(file, "%5.2s is a string\n", "this");

 	int my_integer = -42;
  	unsigned int my_ui = 230;
  	float my_float = 3.56;
  	double my_double = 424242.171717;
	//DECIMAL || INT
	ft_putendl_fd("\nTEST 3: %d & %i Decimals & Integers", file);
	ft_dprintf(file, "Width(10) and precision( 5):\t|% 10.5d|\n", 4242);
	ft_dprintf(file, "Width( 4) and precision(15):\t|%4.15d|\n", 42);
	ft_dprintf(file, "Width(05) and precision( 0):\t|%05d|\n", 42);
	ft_dprintf(file, "Width( 5) and precision( 0):\t|%5d|\n", 42);
	ft_dprintf(file, "Int min test (long): %ld\n", -2147483648);
	ft_dprintf(file, "Long max test (long long): %lld\n", 9223372036854775807);
	
	//Octal
	ft_putendl_fd("\nTEST 4: %o Octals", file);
	ft_dprintf(file, "Octal| Width(-5) & precision(10):\t|%-5.10o|\n", 2500);
	ft_dprintf(file, "Octal| Width(10) & precision( 5):\t|%-10.5o|\n", 2500);
	ft_dprintf(file, "Octal| Width(-05) & precision( ):\t|%-05o|\n", 2500);
	ft_dprintf(file, "Octal| Width( 6) with hash & -  :\t|%-#6o|\n", 2500);

	//Unsigned Int
	ft_putendl_fd("\nTEST 5: %u Unsigned Int", file);
	ft_dprintf(file, "Unsigned integer: %u\n", my_ui);
  	ft_dprintf(file, "Unsigned integer: %U\n", (my_ui * 10));
	//Check this stuff out

	//Hexadecimal
	ft_putendl_fd("\nTEST 6: %x Hexadecimal", file);
	ft_dprintf(file, "%x\n", 42);
	ft_dprintf(file, "%X\n", 42);
	ft_dprintf(file, "%x\n", -42);
	ft_dprintf(file, "%X\n", -42);
	ft_dprintf(file, "%lx\n", 4294967295);
	ft_dprintf(file, "%lx\n", -4294967295);
	ft_dprintf(file, "%#X\n", 42);
	ft_dprintf(file, "%#x\n", -42);

	//FLOAT
	ft_putendl_fd("\nTEST 7: %f Float", file);
	ft_dprintf(file, "This is a float number test %lf\n", 452.365);
	ft_dprintf(file, "This is a float number test %lf\n", -5452.365);
	ft_dprintf(file, "This is a float L number test %Lf\n", -5452.365456789L);
	ft_dprintf(file, "This is a float precision test %.3lf\n", 452.3651);

	//BINARY
	ft_putendl_fd("\nTEST 8: %b Binary", file);
	ft_dprintf(file, "The binary for  5 is %b\n", 5);
	ft_dprintf(file, "The binary for 42 is %B\n", 42);
	ft_dprintf(file, "The binary for 42 is %B\n", -42);
	ft_dprintf(file, "The binary for 42 is %b\n", 2800);

	//POINTERS
	ft_putendl_fd("\nTEST 9: %p Pointers", file);
	ft_dprintf(file, "The memory address of 'my_ui is = %P\n", &my_ui);
	ft_dprintf(file, "The memory address of 'my_float' is = %P\n", &my_float);
	ft_dprintf(file, "The memory address of 'my_double' is = %p\n", &my_double);
	ft_dprintf(file, "The memory address of 'my_char \"a\"' is = %P\n", &a);
	ft_dprintf(file, "And finally the address of 'str' is %p\n", &str);
	
	//WIDE-CHAR
	ft_putendl_fd("\nTEST 10: %C Wide-Char", file);
	ft_dprintf(file, "This is the output when passed int 65:\t%C\n", 65);
	ft_dprintf(file, "This is the output when passed int 188:\t%C\n", 188);
	ft_dprintf(file, "This is the output when passed int 245:\t%C\n", 245);
	ft_dprintf(file, "This is the output when passed int 229:\t%C\n", 229);
	ft_dprintf(file, "This is the output when passed oct 345:\t%C\n", 0345);
	ft_dprintf(file, "This is the output when passed hex xE5:\t%C\n", 0xE5);

	//WIDE-STR
	ft_putendl_fd("\nTEST 10: %C Wide-Str", file);
	wchar_t caps[] = {229, 188, 65, 229};
	ft_dprintf(file, "This is a Wide-Str %S and it's cool\n", caps);

	//COLOURS
	ft_putendl_fd("\nTEST OF THE EPIC, The Coup-De-Gras - COLOUR", file);
	ft_dprintf(file, "This should %sprint in %sRED!\n", M_RED, M_RESET);
	ft_dprintf(file, "This should %sprint in %sGREEN!\n", M_GREEN, M_RESET);
	ft_dprintf(file, "This should %sprint in %sYELLOW!\n", M_YELLOW, M_RESET);
	ft_dprintf(file, "This should %sprint in %sBLUE!\n", M_BLUE, M_RESET);
	ft_dprintf(file, "This should %sprint in %sMAGENTA!\n", M_MAGENTA, M_RESET);
	ft_dprintf(file, "This should %sprint in %sCYAN!\n", M_CYAN, M_RESET);

	close(file);//closing file 
	return(0);
}  