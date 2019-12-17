/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** my_runner
*/

#include "runner.h"

static void init_window(window *window)
{
    window->mode.width = 1920;
    window->mode.height = 1080;
    window->mode.bitsPerPixel = 32;
    window->window = sfRenderWindow_create(window->mode, "Mario Runner",
    sfDefaultStyle, NULL);
}

int main(void)
{
    window *window = malloc(sizeof(window));

    init_window(window);
    event_window(window);
}