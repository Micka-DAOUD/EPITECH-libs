##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile to compile my project
##

LIBS	=	lib/libprintf.a	\
			lib/libmy.a

LIBS_H	=	includes/my.h	\
			includes/printf.h	\

SRC	=	src/bsq.c \
		src/find_square_max_size.c \
		src/load_2d_arr_from_file.c \
		src/fs_get_number_of_rows_cols.c \
		src/errors.c \
		src/main.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

CFLAGS	=	-g2 -Wall -Werror -I includes

all:	$(NAME)

$(NAME): $(LIBS) $(OBJ)
	@make -C lib/my all
	@gcc -g3 -o $(NAME) $(OBJ) $(CFLAGS) $(LIBS)
	@echo -e "\e[1;32mCompilation done\e[0m"

$(LIBS):
	@make -sC lib/my all
	@make -sC lib/printf all

tests_run:
	gcc -o tests/unit_test tests/test_bsq.c ./src/*.c ./lib/my/my_getnbr.c \
./lib/my/my_strlen.c --coverage -lcriterion
	./tests/unit_test

clean:
	@rm -f $(OBJ)
	@rm -f *.gcda
	@rm -f *.gcno
	@rm -f "*~"
	@rm -f "#*#"

fclean: clean
	@rm -f $(LIBS)
	@rm -f $(LIBS_H)
	@rm -f $(NAME)

re:	fclean all

htmlcover:
	@echo "Creating the website ..."
	@gcovr --exclude tests/ --html-details html/
	@rm -f tests/*.gc*
	@google-chrome ./html/coverage_details.html
	@echo "Finished. You can see the result on the html page"

abr:	fclean
	clear
	abricot --all --ignore
