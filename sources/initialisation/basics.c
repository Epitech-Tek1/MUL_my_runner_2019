/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** basics
*/

#include "runner.h"

void initialisation_scene(mario *mario)
{
    mario->scene = 2;
    mario->const_event = 1;
    INTRO.evt.clock = sfClock_create();
}

int initialisation(mario *mario)
{
    WINDOW.mode.width = 1920;
    WINDOW.mode.height = 1080;
    WINDOW.mode.bitsPerPixel = 32;
    WINDOW.color.a = 255;
    WINDOW.color.r = 235;
    WINDOW.color.g = 235;
    WINDOW.color.b = 235;
    WINDOW.window = sfRenderWindow_create(mario->window.mode,
    "Mario Runner", sfClose | sfFullscreen, NULL);
    if (!WINDOW.window)
        return (EXIT_ERROR);
    initialisation_scene(mario);
    menu_init(mario);
    game_init(mario);
    menu_init_transform(mario);
    intro_init(mario);
    sfRenderWindow_setVerticalSyncEnabled(WINDOW.window, sfTrue);
    return (EXIT_SUCCESS);
}