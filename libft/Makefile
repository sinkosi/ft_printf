# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/28 10:06:06 by sinkosi           #+#    #+#              #
#    Updated: 2019/07/28 10:33:21 by sinkosi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#								LIBRARY
################################################################################
NAME := libft.a
#LIBRARY NAME ^^^
################################################################################
#								DIRECTORIES
################################################################################
INC_DIR := includes
SRC_DIR := srcs
OBJ_DIR := obj
#OBJECTS DIRECTORY ^^^
################################################################################
#								FILES
################################################################################

SRC :=		ft_isascii.c	\
			ft_isdigit.c	\
			ft_isupper.c	\
			ft_tolower.c	\
			ft_numlen.c		\
			ft_numlen_base.c	\
			ft_tochar.c		\
			ft_putchar.c	\
			ft_putstr.c		\
			ft_putstr_fd.c	\
			ft_putendl.c	\
			ft_putendl_fd.c	\
			ft_putchar_fd.c	\
			ft_strchr_bool.c	\
			ft_atoi.c		\
			ft_strlen.c		\
			ft_strdel.c		\
			ft_fabs.c		\
			ft_strlowcase.c	\
			ft_strncpy.c	\
			ft_strndup.c	

#ADD SOURCE FILES HERE ^^^
OBJ := $(addprefix $(OBJ_DIR)/, $(SRC:%.c=%.o))
################################################################################
#								COMPILER
################################################################################
CFLAGS := -Wall -Werror -Wextra
#FLAGS^^^
CC := clang $(CFLAGS)
################################################################################
#								RULES
################################################################################

all: $(NAME)

$(NAME): $(OBJ)
	$(START)
	@ar rcs $(NAME) $(OBJ)
	@ranlib $(NAME)
	$(OUTPUT)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) -I $(INC_DIR) -o $@ -c $<

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(YELLOW)$(NAME) OBJECTS CLEANED HAVE BEEN DELETED$(WHITE)"

fclean: clean
	@rm -f $(NAME) a.out
	@echo "$(RED)OBJECTS AND LIBFT.A HAVE BEEN CLEANED$(WHITE)"

re: fclean all

################################################################################
#								ADDITIONAL STUFF
################################################################################

.PHONY := all clean fclean re
#PHONY^^^

###############################################################################
#COLOURS
################################
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

################################################################################
OUTPUT	= 	@echo	"$(GREEN)$(NAME) has been created."\
			"$(BLUE)\nThis library is the intellectual property of"\
			"$(CYAN)\nSIBONELO NKOSI (SINKOSI) & WETHINKCODE_ (NPC)$(WHITE)"\

START	=	@echo "$(GREEN)BUILDING LIBFT LIBRARY$(WHITE)"\
		"$(BLUE)PLEASE BE PATIENT$(WHITE)"
