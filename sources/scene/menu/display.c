/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** display
*/

#include "runner.h"

void display_menu(mario *mario)
{
    sfRenderWindow_drawSprite(WINDOW.window, MENU.sprite.menu, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, MENU.sprite.pipe_game, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, MENU.sprite.pipe_new, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, MENU.sprite.pipe_gen, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, MENU.sprite.pipe_op, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, MENU.sprite.game, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, MENU.sprite.new, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, MENU.sprite.gen, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, MENU.sprite.op, NULL);
}