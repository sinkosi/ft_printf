NAME	= libftprintf.a

#########################
#	COLOURS		#
#########################
NOC		= \033[0m
BOLD		= \033[1m
UNDERLINE	= \033[4m
#COLOUR LIST BELOW WITH BOLD ON
RED		= \033[1;31m
GREEN		= \033[1;32m
YELLOW		= \033[1;33m
BLUE		= \033[1;34m
MAGENTA		= \033[1,35m
CYAN		= \033[1;36m
WHITE		= \033[1;0m

OUTPUT	= 	@echo	"$(GREEN)$(NAME) has been created."\
			"$(BLUE)\nThis library is the intellectual property of"\
			"$(CYAN)\nSIBONELO NKOSI (SINKOSI) & WETHINKCODE_ (NPC)$(WHITE)"\

#########################
#	PATHS		#
#########################
LIBFT_A		= libft.a

SRCS_PATH	= srcs/
OBJ_PATH	= obj/
LIBFT_PATH	= ./libft/

CC		= gcc
CC1		= clang
FLAGS		= -Wall -Werror -Wextra

#########################
#	HEADERS		#
#########################

FTPRINTF_H	= -I ./includes/
LIBFT_H		= -I ./$(LIBFT_PATH)

SRCS_NAME	= ft_convert.c\
		  ft_print_char.c\
		  ft_printf.c\
		  ft_print_string.c\
#		  main.c

SRCS		= $(addprefix $(SRCS_PATH), $(SRCS_NAME))
OBJ		= $(SRCS_NAME:.c=.o)
CFIND		= $(SRCS_NAME:%=$(SRC_PATH)%)
OFILE		= $(SRCS_NAME:%.c=%.o)
OBJ		= $(addprefix $(OBJ_PATH), $(OFILE))
all:	$(OBJ_DIR) $(NAME)

$(OBJ_DIR)	:
	@mkdir	-p $(OBJ_PATH)
	@echo "$(MAGENTA)$(OBJ_PATH) has been created for .o files$(WHITE)"

#ADD YOUR FLAGS BAG IN
$(NAME)	:	$(OBJ)
		@make -C $(LIBFT_PATH)
		@cp $(LIBFT_PATH) $(LIBFT_A) .
		@mv $(LIBFT_A) $(NAME)
		@ar rc $(NAME) $(addprefix(OBJ_PATH), $(OFILE))
		@ranlib $(NAME)
		$(OUTPUT)

$(OBJ)	:	$(CFIND)
	@$(MAKE) $(OFILE)

$(OFILE) :
	@$(CC1) -c -o $(OBJ_PATH) $@ $(SRC_PATH) $(@:%.o=%.c)

clean	:
	@make -C $(LIBFT_PATH)/ clean
	@/bin/rm -rf $(OBJ)

fclean	: clean
	@make -C $(LIBFT_PATH)/ fclean
	@/bin/rm -rf $(NAME)
	#rm a.out

re:	fclean all

.PHONY:	all, clean, fclean, re
