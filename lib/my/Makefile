##
## EPITECH PROJECT, 2022
## micka
## File description:
## Makefile
##

NAME	=	libmy.a

NAME_H	=	my.h

SRC	=	freearr.c			\
		is_in.c				\
		my_pow.c		\
		my_atoi.c			\
		my_nbrlen.c			\
		my_put_nbr.c			\
		my_str_to_word_array.c		\
		my_strcat.c			\
		my_strcmp.c			\
		my_strcpy.c			\
		my_strdup.c			\
		my_strlen.c			\
		my_strncmp.c			\

OBJ	=	$(SRC:.c=.o)

all	:	disp ../$(NAME) done

../$(NAME)	:	$(OBJ)
		@echo -ne "\033[0m"
		@cp $(NAME_H) ../../includes
		@ar rc ../$(NAME) $(OBJ)
		@echo -e "\033[34mCompiling $(NAME)...\033[0m"

disp	:
	@echo -e "\033[1;36m--------------MAKE: LIBMY--------------\033[3;90m"

done	:
	@echo -e "\033[0;32mDone ^o^\033[0m"
	@echo -e "\033[1;36m---------------------------------------"

clean	:
	@rm -f $(OBJ)
	@rm -f ../../includes/$(NAME_H)
	@find -name "*~" -delete
	@find -name "#*#" -delete

fclean	:	clean
	@echo -e "\033[31mDeleting ../$(NAME)...\033[0m"
	@rm -f ../$(NAME)

re	:	fclean all
