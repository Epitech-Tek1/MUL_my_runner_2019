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

## ========================================================================== ##
PATH_EVENT		=	./sources/event/
EVENT			=	menu/hover_button.c								\
					menu/event_start.c


## ========================================================================== ##
PATH_INIT		=	./sources/initialisation/
INIT			=	create_intro.c									\
					create_menu.c									\
					destroy.c										\
					game_loop.c										\
					init_game_mod.c									\
					main.c


## ========================================================================== ##
PATH_SCENE		=	./sources/scene/
SCENE			=	intro/intro.c									\
					intro/display_intro.c							\
					menu/menu.c										\
					menu/display_menu.c									\
					game/game.c


## ========================================================================== ##
PATH_TRANS		=	./sources/transformation/
TRANS			=	intro/intro_init_transform.c						\
					intro/intro_do_transform.c							\
					menu/menu_init_transform.c							\
					menu/menu_do_transform.c


## ========================================================================== ##
SRC				=	$(addprefix $(PATH_EVENT), $(EVENT))			\
					$(addprefix $(PATH_INIT), $(INIT))				\
					$(addprefix $(PATH_SCENE), $(SCENE))			\
					$(addprefix $(PATH_TRANS), $(TRANS))


.PHONY:			 all, fclean, clean, re, library, tests_run

BIN				= 	my_runner

CC				= 	gcc

INCLUDE_DIR		=	./include

CFLAGS			=	-g -I./include/ -D_GNU_SOURCE -W -Wall -Wextra -pedantic -O3 -O2

LDFLAGS 		= 	-lm -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

FLAGS			=	$(CFLAGS) -I$(INCLUDE_DIR) -lm -L./lib -lmy

UT_SRC			=	$(SRC)

UT_OBJ			=	$(UT_SRC:.c=.o)

UT_FLAGS		=	$(CFLAGS) -lcriterion -lgcov --coverage $(FLAGS)

all:			library $(BIN)

library:
				$(MAKE) -C ./lib/my

$(BIN):			$(SRC)
				$(CC) -o $(BIN) $(SRC) $(FLAGS) $(LDFLAGS) $(CFLAGS)
				@$(call SUCCESS, "The binary has been created correctly.")

clean:			clean_lib_obj
				@$(RM) *.vgcore
				@$(RM) *.gc*
				@$(call DONE, "[ DONE 100% ]")

clean_lib:
				$(MAKE) clean_lib -C ./lib/my/

clean_lib_obj:
				$(MAKE) clean -C ./lib/my/

fclean:			clean clean_lib
				$(RM) $(BIN)
				@$(call SUCCESS, "[ DONE ] All library cleaned.")

re:				fclean all

run:
				./$(BIN)

valgrind:
				valgrind ./$(BIN)

tests_run:
				gcc -o $(UT_FLAGS) $(UT_OBJ)
				./units