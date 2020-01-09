/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** event_game
*/

#include "runner.h"

static void paralax(mario *mario)
{
    if (sfSprite_getPosition(GAME.sprite.mg).x == 0)
        sfSprite_setPosition(GAME.sprite.mg2, (sfVector2f){4080, -500});
    if (sfSprite_getPosition(GAME.sprite.mg2).x == 0)
        sfSprite_setPosition(GAME.sprite.mg, (sfVector2f){4080, -500});
    if (sfSprite_getPosition(GAME.sprite.ground).x == 0)
        sfSprite_setPosition(GAME.sprite.ground2, (sfVector2f){6000, -500});
    if (sfSprite_getPosition(GAME.sprite.ground2).x == 0)
        sfSprite_setPosition(GAME.sprite.ground, (sfVector2f){6000, -500});
    if (sfSprite_getPosition(GAME.sprite.back).x == 0)
        sfSprite_setPosition(GAME.sprite.back2, (sfVector2f){15000, 0});
    if (sfSprite_getPosition(GAME.sprite.back2).x == 0)
        sfSprite_setPosition(GAME.sprite.back, (sfVector2f){15000, 0});
}

static void colision(mario *mario)
{
    sfFloatRect mario_rect = sfSprite_getGlobalBounds(GAME.sprite.mario);
    sfFloatRect coin_rect = sfSprite_getGlobalBounds(GAME.sprite.coin);
    sfFloatRect coin_rect2 = sfSprite_getGlobalBounds(GAME.sprite.coin2);
    sfFloatRect coin_rect3 = sfSprite_getGlobalBounds(GAME.sprite.coin3);
    sfFloatRect coin_rect4 = sfSprite_getGlobalBounds(GAME.sprite.coin4);
    sfFloatRect coin_rect5 = sfSprite_getGlobalBounds(GAME.sprite.coin5);
    sfFloatRect goomba_rect = sfSprite_getGlobalBounds(GAME.sprite.goomba);
    sfVector2f disp = {-100, 0};

    if (sfFloatRect_contains(&mario_rect, (cr_x / 1.7), (cr_y / 1.7)))
        mario->score++, sfSprite_setPosition(GAME.sprite.coin, disp);
    if (sfFloatRect_contains(&mario_rect, (cr2_x / 1.7), (cr2_y / 1.7)))
        mario->score++, sfSprite_setPosition(GAME.sprite.coin2, disp);
    if (sfFloatRect_contains(&mario_rect, (cr3_x / 1.7), (cr3_y / 1.7)))
        mario->score++, sfSprite_setPosition(GAME.sprite.coin3, disp);
    if (sfFloatRect_contains(&mario_rect, (cr4_x / 1.7), (cr4_y / 1.7)))
        mario->score++, sfSprite_setPosition(GAME.sprite.coin4, disp);
    if (sfFloatRect_intersects(&mario_rect, &goomba_rect, NULL))
        (event_damage(mario));
}

void move(mario *mario)
{
    event_mario(mario);
    sfSprite_move(GAME.sprite.ground, (sfVector2f){-6, 0});
    sfSprite_move(GAME.sprite.ground2, (sfVector2f){-6, 0});
    sfSprite_move(GAME.sprite.coin, (sfVector2f){-6, 0});
    sfSprite_move(GAME.sprite.coin2, (sfVector2f){-6, 0});
    sfSprite_move(GAME.sprite.coin3, (sfVector2f){-6, 0});
    sfSprite_move(GAME.sprite.coin4, (sfVector2f){-6, 0});
    sfSprite_move(GAME.sprite.coin5, (sfVector2f){-6, 0});
    sfSprite_move(GAME.sprite.quest, (sfVector2f){-6, 0});
    sfSprite_move(GAME.sprite.quest2, (sfVector2f){-6, 0});
    sfSprite_move(GAME.sprite.mg, (sfVector2f){-3, 0});
    sfSprite_move(GAME.sprite.mg2, (sfVector2f){-3, 0});
    sfSprite_move(GAME.sprite.back, (sfVector2f){-1, 0});
    sfSprite_move(GAME.sprite.back2, (sfVector2f){-1, 0});
    sfSprite_move(GAME.sprite.goomba, (sfVector2f){-6.7, 0});
    paralax(mario);
}

void event_game(mario *mario)
{
    colision(mario);
    move(mario);
}