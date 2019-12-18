/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** my_runner
*/

#include "runner.h"

static void init_window(mario *mario)
{
    WINDOW.mode.width = 1920;
    WINDOW.mode.height = 1080;
    WINDOW.mode.bitsPerPixel = 32;
    WINDOW.window = sfRenderWindow_create(mario->window.mode,
    "Mario Runner", sfFullscreen, NULL);
}

int main(void)
{
    mario *mario = malloc(sizeof(mario) * 1000000);

    mario->scene = 0;
    sfInitMenu(mario);
    intro_init(mario);
    init_window(mario);
    game_loop(mario);
    return (true);
}