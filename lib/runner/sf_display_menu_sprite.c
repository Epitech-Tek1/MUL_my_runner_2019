/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** init_display
*/

#include <SFML/Graphics.h>
#include "runner.h"

void sfDisplayMenuSprite(window *window, _menu *_menu)
{
    sfRenderWindow_drawSprite(window->window, _menu->sprite.menu, NULL);
    sfRenderWindow_drawSprite(window->window, _menu->sprite.pipe_game, NULL);
    sfRenderWindow_drawSprite(window->window, _menu->sprite.pipe_new, NULL);
    sfRenderWindow_drawSprite(window->window, _menu->sprite.pipe_gen, NULL);
    sfRenderWindow_drawSprite(window->window, _menu->sprite.pipe_op, NULL);
    sfRenderWindow_drawSprite(window->window, _menu->sprite.game, NULL);
    sfRenderWindow_drawSprite(window->window, _menu->sprite.new, NULL);
    sfRenderWindow_drawSprite(window->window, _menu->sprite.gen, NULL);
    sfRenderWindow_drawSprite(window->window, _menu->sprite.op, NULL);
}