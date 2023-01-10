##
## EPITECH PROJECT, 2022
## Created by Micka DAOUD & Adrien LACHAMBRE
## File Description
## Makefile
##

NAME	=	BINARY_NAME

LIBS	=	lib/libprintf.a \
		lib/libmy.a

LIBS_H	=	includes/my.h   \
		includes/printf.h       \

SRC	=	src/main.c      \

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror -g3

all	:	$(NAME)

$(LIBS)	:
	@make -C lib/printf/ all
	@echo -n "\033[3;90m"

$(NAME)	:	$(LIBS) $(OBJ)
	@gcc -o $(NAME) $(SRC) $(LIBS) $(CFLAGS)
	@echo "\033[34mCompiling $(NAME)...\033[0m"
	@echo "\033[32mDone :D\033[0m"

clean   :
	+@make -sC lib/my clean
	+@make -sC lib/printf clean
	@rm -f $(OBJ)
	@find -name "*~" -delete
	@find -name "#*#" -delete

fclean	:	clean
	+@make -sC lib/my fclean
	+@make -sC lib/printf fclean
	@rm -f $(NAME)

re	:	fclean all

abr	:	fclean
	clear
	abricot --all
