/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** basics
*/

#include "runner.h"

void initialisation_clock(mario *mario)
{
    GAME._clock.quest = sfClock_create();
    GAME._clock.coin = sfClock_create();
    GAME._clock.goomba = sfClock_create();
    INTRO.evt.clock = sfClock_create();
    GAME.evt.clock = sfClock_create();
    GAME.evt._game_time.clock = sfClock_create();
    GAME._clock.colision = sfClock_create();
    mario->clock = sfClock_create();
}

static int error_handling(int ac) {
    if (ac != 2)
        return (EXIT_ERROR);
    return (EXIT_SUCCESS);
}

void initialisation_scene(mario *mario)
{
    mario->scene = 0;
    mario->const_event = 0;
    mario->jump = 0;
    mario->score = 0;
    mario->is_move = 1;
    mario->is_end = false;
    mario->player.health = true;
    GAME.catch = true;
    GAME.screen_win = false;
    initialisation_clock(mario);
}

int initialisation(mario *mario, int ac, char *filepath)
{
    if (error_handling(ac) == 84)
        return (EXIT_ERROR);
    WINDOW.mode = (sfVideoMode){1920, 1080, 32};
    GAME.score = sfText_create();
    GAME.font = sfFont_createFromFile("assets/fonts/Roboto-Black.ttf");
    sfText_setFont(GAME.score, GAME.font);
    sfText_setPosition(GAME.score, (sfVector2f){1870, 20});
    WINDOW.window = sfRenderWindow_create(mario->window.mode,
    "Mario Runner", sfClose | sfDefaultStyle, NULL);
    if (!WINDOW.window)
        return (EXIT_ERROR);
    initialisation_scene(mario);
    menu_init(mario);
    game_init(mario);
    menu_init_transform(mario);
    game_init_transform(mario);
    intro_init(mario);
    sfRenderWindow_setVerticalSyncEnabled(WINDOW.window, sfTrue);
    return (EXIT_SUCCESS);
}