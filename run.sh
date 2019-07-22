time make -C libft/ fclean && time make -C libft/
#clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
#clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
#clang  main.o get_next_line.o -I libft/includes -L libft/ -lft
clang ./libft/libft.a ./srcs/main.c ./srcs/ft_convert.c ./srcs/ft_print_string.c ./srcs/ft_print_char.c ./srcs/ft_printf.c ./libft/includes/libft.h 
make -C libft/ clean
echo -e "\033[4;32mYOUR PROGRAM WILL START RUNNING SOON:\n**************************************\n"
./a.out
#echo "\n"
make -C libft/ fclean
