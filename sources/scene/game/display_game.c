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
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.quest, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.quest2, NULL);
    quest(mario, GAME.sprite.quest);
    quest(mario, GAME.sprite.quest2);
}