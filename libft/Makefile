#########################
#	LIBRARY NAME	#
#########################
NAME	= libft.a

#########################
#	DIRECTORIES	#
#########################
INC_DIR		=	./includes/
SRC_DIR		=	./srcs/
OBJ_DIR		=	./obj/

#########################
#	COLOURS		#
#########################
NOC		= \033[0m
BOLD		= \033[1m
UNDERLINE	= \033[4m
#BOLD ON
RED		= \033[1;31m
GREEN		= \033[1;32m
YELLOW		= \033[1;33m
BLUE		= \033[1;34m
MAGENTA		= \033[1,35m
CYAN		= \033[1;36m
WHITE		= \033[1;0m

#########################
#	COMPILER	#
#########################
#Chosen compiler as prescribed by WTC_
CC		= clang

#Compile flags as stipulated by 42.
CCFLAG	= -Wall -Wextra -Werror

#Additional Compilation flags
EXTRAS	= -c -I

OUTPUT	= 	@echo	"$(GREEN)$(NAME) has been created."\
			"$(BLUE)\nThis library is the intellectual property of"\
			"$(CYAN)\nSIBONELO NKOSI (SINKOSI) & WETHINKCODE_ (NPC)$(WHITE)"\

#########################
#	FILES		#
#########################
CTYPE		=	ft_islower.c	\
			ft_isupper.c	\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isblank.c	\
			ft_isspace.c	\
			ft_isascii.c	\
			ft_isgraph.c	\
			ft_ispunct.c	\
			ft_iscntrl.c	\
			ft_isprint.c	\
			ft_isxdigit.c	\
			ft_isimax.c	\
			ft_isimin.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_tochar.c	\
			ft_tostr.c	\
			ft_str_is_lowercase.c	\
			ft_str_is_uppercase.c	\
			ft_str_is_alpha.c	\
			ft_str_is_numeric.c	\
			ft_str_is_xnumeric.c	\
			ft_str_is_alnum.c	\
			ft_str_is_printable.c	\

STRING		=	ft_memset.c		\
		  ft_bzero.c		\
		  ft_memalloc.c		\
		  ft_memdel.c		\
		  ft_memcpy.c		\
		  ft_memccpy.c		\
		  ft_memmove.c		\
		  ft_memchr.c		\
		  ft_memcmp.c		\
		  ft_strlen.c		\
		  ft_strcpy.c		\
		  ft_strncpy.c		\
		  ft_strlcpy.c		\
		  ft_strcat.c		\
		  ft_strncat.c		\
		  ft_strlcat.c		\
		  ft_strchr.c		\
		  ft_strrchr.c		\
		  ft_strlchr.c		\
		  ft_strstr.c		\
		  ft_strnstr.c		\
		  ft_strlstr.c		\
		  ft_strcasestr.c	\
		  ft_strcmp.c		\
		  ft_strncmp.c		\
		  ft_strcasecmp.c	\
		  ft_strncasecmp.c	\
  		  ft_strnew.c		\
  		  ft_strdel.c		\
  		  ft_strclr.c		\
 		  ft_strdup.c		\
		  ft_strndup.c		\
		  ft_strequ.c		\
  		  ft_strnequ.c		\
		  ft_strreverse.c	\
		  #ft_strspn.c		\
		  ft_strcspn.c		\
		  ft_strtok.c

MATH		= 	ft_div_mod.c		\
			ft_factorial.c		\
			ft_fibonacci.c		\
			ft_is_prime.c		\
			ft_find_next_prime.c	\
			ft_power.c		\
			ft_sqrt.c		\
			ft_ultimate_div_mod.c	\
			ft_vector.c		\
			ft_fabs.c		\
			ft_sine.c		\

SRC		= ft_atoi.c			\
  		  ft_striter.c		\
  		  ft_striteri.c		\
  		  ft_strmap.c		\
  		  ft_strmapi.c		\
		  ft_strsub.c		\
		  ft_strjoin.c		\
		  ft_strtrim.c		\
		  ft_strtrim_delim.c	\
		  ft_strsplit.c		\
		  ft_numlen.c		\
		  ft_itoa.c		\
		  ft_putchar.c		\
		  ft_putstr.c		\
		  ft_putendl.c		\
		  ft_putnbr.c		\
		  ft_putchar_fd.c	\
		  ft_putstr_fd.c	\
		  ft_putendl_fd.c	\
		  ft_putnbr_fd.c	\
		  ft_lstnew.c		\
		  ft_lstdelone.c	\
		  ft_lstdel.c		\
		  ft_lstadd.c		\
		  ft_lstiter.c		\
		  ft_lstmap.c		\
		  ft_strlowcase.c	\
		  ft_strupcase.c	\
		  ft_strcapitalize.c	\
		  ft_swap.c		\
		  ft_numlen_base.c	\
		  ft_itoa_base.c	\
		  ft_putnbr_base.c	\
		  ft_atoi_base.c	\
		  ft_arraydup.c		\
		  get_next_line.c	\
		  ft_atoi_base.c	\
#		  test.c		\
#		  main.c			\

#OBJ_A		=	$(addprefix$(OBJ_DIR), $(OFILE_A))
OBJ_A		=	$(CTYPE:.c=.o)
OBJ_B		=	$(STRING:.c=.o)
OBJ_C		=	$(MATH:.c=.o)
OBJ_D		=	$(SRC:.c=.o)

LIBFILES_C	= $(CTYPE) $(STRING) $(MATH) $(SRC)
#$(STRING)) $(MATH) $(SRC)
LIBFILES_O	= $(CTYPE:.c=.o) $(STRING:.c=.o) $(MATH:.c=.o) $(SRC:.c=.o)
      			
all	:	$(NAME)

$(OBJ_DIR) :
		@mkdir -p $(OBJ_DIR)

#@ar rc $(NAME) $(addprefix$(OBJ_DIR), $(LIBFILES_O) 

$(NAME)	:
	@$(CC) $(FLAGS) $(EXTRAS) $(INC_DIR) $(LIBFILES_C)
	@ar rc $(NAME) $(LIBFILES_O) 
	@ranlib $(NAME)
	$(OUTPUT)

clean	:
		@rm -rf $(OBJ_A) $(OBJ_B) $(OBJ_C) $(OBJ_D) a.out
		@echo "$(YELLOW)OBJECTS HAVE BEEN CLEANED$(WHITE)"

fclean	: clean
		@rm -rf $(NAME)
		@echo "$(RED)LIBFT.A HAS BEEN CLEANED FULLY FROM SYSTEM$(WHITE)"

re		:fclean all

.PHONY: all clean fclean re
