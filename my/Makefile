##
## EPITECH PROJECT, 2022
## micka
## File description:
## makefile
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
		my_sort_word_array.c	\
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
		my_strtab_len.c		\
		my_strupcase.c			\
		my_swap.c			\

all	:	$(NAME)

$(NAME)	:
		@cp $(NAME_H) ../../includes && echo "Copying $(NAME_H)..."
		@echo "Compiling .o files..."
		@gcc -c $(SRC) -I../../includes
		@echo "Done ! :D"
		@ar rc $(NAME) *.o && echo "Creating $(NAME) library..."
		@mv $(NAME) ../
		@make -s clean
		@echo "Done ! ^o^"

clean	:
		@rm -f *.o && echo "Deleting .o files..."
		@rm -f *.c~ && echo "Deleting temp files..."
