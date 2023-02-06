##
## EPITECH PROJECT, 2022
## micka
## File description:
## Makefile
##

NAME	=	libmy.a

NAME_H	=	my.h

SRC	=	my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_find_prime_sup.c		\
		my_getnbr.c			\
		my_is_prime.c			\
		my_isneg.c			\
		my_nbrlen.c			\
		my_put_nbr.c			\
		my_putchar.c			\
		my_putnbr_base.c		\
		my_putstr.c			\
		my_revstr.c			\
		my_rev_word_array.c		\
		my_showmem.c			\
		my_showstr.c			\
		my_sort_int_array.c		\
		my_sort_word_array.c		\
		my_str_isalpha.c		\
		my_str_islower.c		\
		my_str_isnum.c			\
		my_str_isprintable.c		\
		my_str_isupper.c		\
		my_str_to_word_array.c		\
		my_strcapitalize.c		\
		my_strcat.c			\
		my_strcmp.c			\
		my_strcpy.c			\
		my_strdup.c			\
		my_strlen.c			\
		my_strlowcase.c			\
		my_strncat.c			\
		my_strncmp.c			\
		my_strncpy.c			\
		my_strstr.c			\
		my_strtab_len.c			\
		my_strupcase.c			\
		my_swap.c			\

OBJ	=	$(SRC:.c=.o)

all	:	disp ../$(NAME) done

../$(NAME)	:	$(OBJ)
		@echo -ne "\033[0m"
		@cp $(NAME_H) ../../includes
		@echo -e "\033[33mIncluding $(NAME_H)...\033[0m"
		@ar rc ../$(NAME) $(OBJ)
		@echo -e "\033[34mCompiling $(NAME)...\033[0m"

disp	:
	@echo -e "\033[1;36m--------------MAKE: LIBMY--------------\033[3;90m"

done	:
	@echo -e "\033[1;36m---------------------------------------"
	@echo -e "\033[0;32mDone ^o^\033[0m"

clean	:
	@echo -e "\033[37mCleaning lib/my...\033[0m"
	@rm -f $(OBJ)
	@rm -f ../../includes/$(NAME_H)
	@find -name "*~" -delete
	@find -name "#*#" -delete

fclean	:	clean
	@echo -e "\033[31mDeleting ../$(NAME)...\033[0m"
	@rm -f ../$(NAME)

re	:	fclean all
