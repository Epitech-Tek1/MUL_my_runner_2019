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
    // printf("%d\n", TRANS.position.game.);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.mg, NULL);
}