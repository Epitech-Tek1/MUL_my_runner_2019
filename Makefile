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
EVENT			=	intro/event_intro.c								\
					menu/hover_button.c								\
					menu/event_start.c								\
					game/event_game.c								\
					game/event_loose.c								\
					game/event_win.c								\
					game/event_key.c								\
					game/event_damage.c								\
					game/colision_coin.c							\
					game/colision_mountain.c						\
					game/colision_ennemies.c						\
					game/reset_game.c


## ========================================================================== ##
PATH_INIT		=	./sources/initialisation/
INIT			=	basics.c										\
					create_intro.c									\
					create_menu.c									\
					create_game.c									\
					create_game2.c									\
					create_game3.c									\
					destroy.c										\
					game_loop.c										\
					init_game_mod.c									\
					main.c


## ========================================================================== ##
PATH_SCENE		=	./sources/scene/
SCENE			=	intro/intro.c									\
					intro/display_intro.c							\
					menu/menu.c										\
					menu/display_menu.c								\
					game/game.c										\
					game/display_game.c								\
					game/gif_elements/mario.c						\
					game/gif_elements/quest.c						\
					game/gif_elements/coin.c						\
					game/gif_elements/goomba.c


## ========================================================================== ##
PATH_TRANS		=	./sources/transformation/
TRANS			=	intro/intro_init_transform.c						\
					intro/intro_do_transform.c							\
					menu/menu_init_transform.c							\
					menu/menu_do_transform.c							\
					game/game_init_transform.c							\
					game/game_init_2.c


## ========================================================================== ##
SRC				=	$(addprefix $(PATH_EVENT), $(EVENT))			\
					$(addprefix $(PATH_INIT), $(INIT))				\
					$(addprefix $(PATH_SCENE), $(SCENE))			\
					$(addprefix $(PATH_TRANS), $(TRANS))			\
					$(addprefix $(PATH_LIB), $(LIB))


.PHONY:			 all, fclean, clean, re, library, tests_run

BIN				= 	my_runner

CC				= 	@gcc

INCLUDE_DIR		=	./include

CFLAGS			=	-g -I./include/ -D_GNU_SOURCE -Wall -Wextra -pedantic -O3 -O2 -Wunused

LDFLAGS 		= 	-lm -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

FLAGS			=	$(CFLAGS) -I$(INCLUDE_DIR) -lm -L./lib -lmy -Llib -lmy_printf

UT_SRC			=	$(SRC)

UT_OBJ			=	$(UT_SRC:.c=.o)

UT_FLAGS		=	$(CFLAGS) -lcriterion -lgcov --coverage $(FLAGS)

all:			library $(BIN)

library:
				@$(MAKE) -C ./lib/my/
				@$(MAKE) -C ./lib/my_printf/

$(BIN):			$(SRC)
				@$(CC) -o $(BIN) $(SRC) $(FLAGS) $(LDFLAGS) $(CFLAGS)
				@$(call SUCCESS, "The binary has been created correctly.")

clean:			clean_lib_obj
				@$(RM) *.vgcore
				@$(RM) *.gc*
				@$(call DONE, "[ DONE 100% ]")

clean_lib:
				@$(MAKE) clean_lib -C ./lib/my/
				@$(MAKE) clean_lib -C ./lib/my_printf/

clean_lib_obj:
				@$(MAKE) clean -C ./lib/my/
				@$(MAKE) clean -C ./lib/my_printf/

fclean:			clean clean_lib
				@$(RM) $(BIN)
				@$(call SUCCESS, "[ DONE ] All library cleaned.")

re:				fclean all

run:
				./$(BIN) game_map/game

valgrind:
				valgrind ./$(BIN) game_map/game

tests_run:
				gcc -o $(UT_FLAGS) $(UT_OBJ)
				./units