time make -C libft/ fclean && time make linux -C libft/
#clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
#clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
#clang  main.o get_next_line.o -I libft/includes -L libft/ -lft
clang main.c ./src/*.c  ./libft/libft.h ./libft/libft.a 
make -C libft/ clean
