##
## EPITECH PROJECT, 2019
## PSU_my_runner_2019
## File description:
## Makefile
##

SUCCESS				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\x1b[0m"
WARNING				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[33m $1\x1b[0m"
ATTENTION			= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[31m $1\x1b[0m"
ERROR				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[31m $1\x1b[0m"
DONE				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[34m $1\x1b[0m"

.PHONY:			 all, fclean, clean, re, library, tests_run

BIN				= 	my_runner

CC				= 	gcc

INCLUDE_DIR		=	./include

CFLAGS			=	-Wall -g

FLAGS			=	$(CFLAGS) -I$(INCLUDE_DIR) -lm -L./lib -lmy -L./lib -lrunner -lcsfml-window -lcsfml-graphics -lcsfml-system

UT_SRC			=	$(SRC)

UT_OBJ			=	$(UT_SRC:.c=.o)

UT_FLAGS		=	$(CFLAGS) -lcriterion -lgcov --coverage $(FLAGS)

SRC				=	$(wildcard src/*.c)

all:			library $(BIN)

library:
				$(MAKE) -C ./lib/my/
				$(MAKE) -C ./lib/runner/

$(BIN):			$(SRC);
				$(CC) -o $(BIN) $(SRC) $(FLAGS)
				@$(call SUCCESS, "The binary has been created correctly.")

clean:			clean_lib_obj
				@$(RM) *.vgcore
				@$(RM) *.gc*
				@$(call DONE, "[ DONE 100% ]")

clean_lib:
				$(MAKE) clean_lib -C ./lib/my/
				$(MAKE) clean_lib -C ./lib/runner

clean_lib_obj:
				$(MAKE) clean -C ./lib/my/
				$(MAKE) clean -C ./lib/runner

fclean:			clean clean_lib
				$(RM) $(BIN)
				@$(call SUCCESS, "[ DONE ] All library cleaned.")

re:				fclean all

run:
				./$(BIN) my_map/map_test

valgrind:
				valgrind ./$(BIN) my_map/map_test

tests_run:
				gcc -o $(UT_FLAGS) $(UT_OBJ)
				./units