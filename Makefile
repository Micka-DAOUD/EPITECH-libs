##
## EPITECH PROJECT, 2023
## Created by Micka DAOUD
## File description:
## Makefile
##

NAME	=	LIBS_DEFAULT

LIBS	=	lib/libprintf.a \
		lib/libmy.a

LIBS_H	=	includes/my.h   \
		includes/printf.h       \

SRC	=	src/main.c      \

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wextra -Werror -g3

all	:	$(NAME)

$(LIBS)	:
	@make -C lib/printf/ all
	@echo -ne "\033[3;90m"

$(NAME)	:	$(LIBS) $(OBJ)
	@gcc -o $(NAME) $(SRC) $(LIBS) $(CFLAGS)
	@echo -e "\033[34mCompiling $(NAME)...\033[0m"
	@echo -e "\033[32mDone :D\033[0m"

clean   :
	@make -sC lib/my clean
	@make -sC lib/printf clean
	@rm -f $(OBJ)
	@find -name "*~" -delete
	@find -name "#*#" -delete

fclean	:	clean
	@make -sC lib/my fclean
	@make -sC lib/printf fclean
	@rm -f $(NAME)

re	:	fclean all

abr	:	fclean
	clear
	abricot --all

style	:	fclean
	@clear
	@coding-style.sh . .
	@clear
	@cat coding-style-reports.log
	@rm -rf coding-style-reports.log
