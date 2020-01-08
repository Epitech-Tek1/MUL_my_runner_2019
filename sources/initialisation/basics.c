/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** basics
*/

#include "runner.h"

static void initialisation_clock(mario *mario)
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
    initialisation_clock(mario);
}

int initialisation(mario *mario, int ac, char *filepath)
{
    if (error_handling(ac) == 84)
        return (EXIT_ERROR);
    WINDOW.mode.width = 1920;
    WINDOW.mode.height = 1080;
    WINDOW.mode.bitsPerPixel = 32;
    mario->score = 0;
    WINDOW.window = sfRenderWindow_create(mario->window.mode,
    "Mario Runner", sfClose | sfDefaultStyle, NULL);
    if (!WINDOW.window)
        return (EXIT_ERROR);
    initialisation_scene(mario);
    // mario->map = my_str_to_word_array(mario->map);
    menu_init(mario);
    game_init(mario);
    menu_init_transform(mario);
    game_init_transform(mario);
    intro_init(mario);
    sfRenderWindow_setVerticalSyncEnabled(WINDOW.window, sfTrue);
    return (EXIT_SUCCESS);
}