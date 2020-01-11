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
    coin(mario, GAME.sprite.coin7);
    coin(mario, GAME.sprite.coin8);
    coin(mario, GAME.sprite.coin9);
    coin(mario, GAME.sprite.coin10);
    coin(mario, GAME.sprite.coin11);
    coin(mario, GAME.sprite.coin12);
    coin(mario, GAME.sprite.coin13);
    coin(mario, GAME.sprite.coin14);
    coin(mario, GAME.sprite.coin15);
    coin(mario, GAME.sprite.coin16);
}

static void call_fct_2(mario *mario)
{
    coin(mario, GAME.sprite.coin17);
    coin(mario, GAME.sprite.coin18);
    coin(mario, GAME.sprite.coin19);
    coin(mario, GAME.sprite.coin20);
    coin(mario, GAME.sprite.coin21);
    coin(mario, GAME.sprite.coin22);
    coin(mario, GAME.sprite.coin23);
    goomba(mario, GAME.sprite.goomba);
    goomba(mario, GAME.sprite.goomba2);
    goomba(mario, GAME.sprite.goomba3);
    goomba(mario, GAME.sprite.goomba4);
}

static void disp_2(mario *mario)
{
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin15, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin16, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin17, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin18, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin19, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin20, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin21, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin22, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin23, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.bowser, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.goomba2, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.goomba3, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.goomba4, NULL);
}

static void disp(mario *mario)
{
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.quest, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.quest2, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin2, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin3, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin4, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin5, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin6, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin7, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin8, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin9, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin10, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin11, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin12, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin13, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.coin14, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.pipe, NULL);
    disp_2(mario);
}

void game_display(mario *mario)
{
    event_game(mario);
    call_fct(mario);
    call_fct_2(mario);
    DrawRecShape(WINDOW.window, GAME._colision.ground, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain2, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain3, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain4, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain5, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain6, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.back, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.back2, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.mg, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.mg2, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.ground, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.ground2, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.goomba, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.flag, NULL);
    sfRenderWindow_drawSprite(WINDOW.window, GAME.sprite.mario, NULL);
    disp(mario);
}