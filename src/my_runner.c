/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** my_runner
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include "main.h"
#include "runner.h"

static void event_click(window *window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window->window, &event))
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window->window);
}

static void event_window(window *window, sfEvent event)
{
    _menu *_menu = malloc(sizeof(_menu) * 10);
    static _Bool game_mod = true;

    (!game_mod) ? (sfInitMenu(window, &game_mod, _menu)) :
    (sfInitGame(window, &game_mod, _menu));
    while (sfRenderWindow_isOpen(window->window)) {
        event_click(window, event);
        sfRenderWindow_setFramerateLimit(window->window, 60);
        sfRenderWindow_clear(window->window, sfBlack);
        sfSpriteTransform(window, _menu);
        (sfSpriteTransform(window, _menu) == false) ? sfDisplayMenuSprite(window, _menu) : printf("coucou\n");
        sfRenderWindow_display(window->window);
    }
    sfRenderWindow_destroy(window->window);
}

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
    sfEvent event;

    init_window(window);
    event_window(window, event);
}