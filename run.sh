time make -C libft/ fclean && time make -C libft/
#clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
#clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
#clang  main.o get_next_line.o -I libft/includes -L libft/ -lft
#clang ./libft/libft.a ./srcs/*.c ./libft/includes/libft.h
#clang ./libft/libft.a ./srcs/main.c ./srcs/ft_convert.c ./srcs/ft_exit.c ./srcs/ft_flag_check.c ./srcs/ft_flag_hash.c ./srcs/ft_flag_minus.c ./srcs/ft_flag_plus.c ./srcs/ft_flag_space.c ./srcs/ft_flag_width.c ./srcs/ft_handler_c_char.c ./srcs/ft_handler_d_int.c ./srcs/ft_handler_o_octal.c ./srcs/ft_handler_p_pointer.c ./srcs/ft_handler_s_str.c ./srcs/ft_handler_u_unsigned_int.c ./srcs/ft_handler_x_hexadecimal.c ./srcs/ft_print_c_char.c ./srcs/ft_print_d_int.c ./srcs/ft_printf.c ./srcs/ft_print_mod.c ./srcs/ft_print_o_octal.c ./srcs/ft_print_out.c ./srcs/ft_print_p_pointer.c ./srcs/ft_print_s_str.c ./srcs/ft_print_u_unsigned_int.c ./srcs/ft_print_x_hexadecimal.c ./libft/includes/libft.h 
make -C libft/ clean


echo -e "\033[4;32mYOUR PROGRAM WILL START RUNNING SOON:\n**************************************\n"
./a.out
#echo "\n"
make -C libft/ fclean
