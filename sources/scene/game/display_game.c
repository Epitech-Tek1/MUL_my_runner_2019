/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** display_game
*/

#include "runner.h"

static void call_fct(mario *mario)
{
    quest(mario, GAME.sprite.quest);
    quest(mario, GAME.sprite.quest2);
    coin(mario, GAME.sprite.coin);
    coin(mario, GAME.sprite.coin2);
    coin(mario, GAME.sprite.coin3);
    coin(mario, GAME.sprite.coin4);
    coin(mario, GAME.sprite.coin5);
    coin(mario, GAME.sprite.coin6);
    goomba(mario, GAME.sprite.goomba);
}

static void disp(mario *mario)
{
    DrawRecShape(WINDOW.window, GAME._colision.ground, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain2, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain3, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain4, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain5, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain6, NULL);
}

void game_display(mario *mario)
{
    event_game(mario);
    call_fct(mario);
    disp(mario);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.back, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.back2, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.mg, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.mg2, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.ground, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.ground2, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.goomba, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.mario, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.quest, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.quest2, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin2, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin3, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin4, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin5, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin6, NULL);
}