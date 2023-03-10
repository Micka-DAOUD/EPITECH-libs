##
## EPITECH PROJECT, 2022
## micka
## File description:
## Makefile
##

NAME	=	libprintf.a

LIBS	=	../libmy.a

NAME_H	=	printf.h	\
		my.h

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
		flags_bigr.c		\
		my_printf.c		\

OBJ	=	$(SRC:.c=.o)

all	:	disp $(LIBS) ../$(NAME) done

$(LIBS)	:
		@make -C ../my/ all
		@echo -ne "\033[3;90m"

$(NAME_H)	:
		@cp ../my/my.h ./

../$(NAME)	:	$(NAME_H) $(OBJ)
	@echo -ne "\033[0m"
	@cp $(NAME_H) ../../includes
	@ar rc ../$(NAME) $(OBJ)
	@echo -e "\033[34mCompiling $(NAME)...\033[0m"

disp    :
	@echo -e "\033[1;36m------------MAKE: LIBPRINTF------------\033[3;90m"

done    :
	@echo -e "\033[0;32mDone \\(^O^)/\033[0m"
	@echo -e "\033[1;36m---------------------------------------\033[0m"

clean	:
	@rm -f ../../includes/$(NAME_H)
	@rm -f $(OBJ)
	@find -name "*~" -delete
	@find -name "#*#" -delete

fclean	:	clean
	@echo -e "\033[31mDeleting ../$(NAME)...\033[0m"
	@rm -f ../$(NAME)

re	:	fclean all
