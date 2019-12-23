/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** display_game
*/

#include "runner.h"

void game_display(mario *mario)
{
    event_game(mario);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.back, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.mg, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.mg2, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.mario, NULL);
}