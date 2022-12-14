##
## EPITECH PROJECT, 2022
## micka
## File description:
## makefile
##

NAME	=	libprintf.a

LIBS	=	../libmy.a

NAME_H	=	printf.h

SRC	=	my_put_float.c		\
		my_put_sci.c		\
		my_put_uint_base.c	\
		flags_2f.c		\
		flags_di.c		\
		flags_2g.c		\
		flags_bigs.c		\
		flags_bou2x.c		\
		flags_cs.c		\
		flags_2e.c		\
		flags_p.c		\
		flags_2a.c		\
		flags_bigr.c	\
		my_printf.c		\

all	:	$(LIBS) $(NAME)

$(LIBS)	:
		@make -sC ../my/ all

$(NAME)	:
		@cp $(NAME_H) ../../includes && echo "Copying $(NAME_H)..."
		@echo "Compiling .o files..."
		@gcc -c $(SRC) -I../../includes -L../ -lmy
		@echo "Done ! :D"
		@ar rc $(NAME) *.o && echo "Creating $(NAME) library..."
		@mv $(NAME) ../
		@make -s clean
		@echo "Done ! ^o^"

clean	:
		@rm -f *.o && echo "Deleting .o files..."
		@rm -f *.c~ && echo "Deleting temp files..."
