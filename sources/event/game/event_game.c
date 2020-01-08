/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** event_game
*/

#include "runner.h"

static void paralax(mario *mario)
{
    sfVector2f init_pos = {6000 + 1920, -500};
    sfVector2f ground_pos = {6000, -500};
    sfVector2f back = {15000, 0};

    if (sfSprite_getPosition(GAME.sprite.mg).x == 0)
        sfSprite_setPosition(GAME.sprite.mg2, init_pos);
    if (sfSprite_getPosition(GAME.sprite.mg2).x == 0)
        sfSprite_setPosition(GAME.sprite.mg, init_pos);
    if (sfSprite_getPosition(GAME.sprite.ground).x == 0)
        sfSprite_setPosition(GAME.sprite.ground2, ground_pos);
    if (sfSprite_getPosition(GAME.sprite.ground2).x == 0)
        sfSprite_setPosition(GAME.sprite.ground, ground_pos);
    if (sfSprite_getPosition(GAME.sprite.back).x == 0)
        sfSprite_setPosition(GAME.sprite.back2, back);
    if (sfSprite_getPosition(GAME.sprite.back2).x == 0)
        sfSprite_setPosition(GAME.sprite.back, back);
}

static void colision(mario *mario)
{
    sfFloatRect mario_rect = sfSprite_getGlobalBounds(GAME.sprite.mario);
    sfFloatRect coin_rect = sfSprite_getGlobalBounds(GAME.sprite.coin);
    sfFloatRect coin_rect2 = sfSprite_getGlobalBounds(GAME.sprite.coin2);
    sfFloatRect coin_rect3 = sfSprite_getGlobalBounds(GAME.sprite.coin2);
    sfFloatRect coin_rect4 = sfSprite_getGlobalBounds(GAME.sprite.coin2);
    sfFloatRect coin_rect5 = sfSprite_getGlobalBounds(GAME.sprite.coin2);
    sfFloatRect goomba_rect = sfSprite_getGlobalBounds(GAME.sprite.goomba);

    if (sfFloatRect_contains(&mario_rect, (coin_rect.left + coin_rect.width
    / 2), (coin_rect.top + coin_rect.height / 2))) {
        mario->score++;
        sfSprite_setPosition(GAME.sprite.coin, (sfVector2f){-100, 0});
    }
    if (sfFloatRect_contains(&mario_rect, (coin_rect2.left + coin_rect2.width
    / 2), (coin_rect2.top + coin_rect2.height / 2))) {
        mario->score++;
        sfSprite_setPosition(GAME.sprite.coin2, (sfVector2f){-100, 0});
    }
    if (sfFloatRect_contains(&mario_rect, (coin_rect3.left + coin_rect3.width
    / 2), (coin_rect3.top + coin_rect3.height / 2))) {
        mario->score++;
        sfSprite_setPosition(GAME.sprite.coin3, (sfVector2f){-100, 0});
    }
    if (sfFloatRect_contains(&mario_rect, (coin_rect4.left + coin_rect4.width
    / 2), (coin_rect4.top + coin_rect4.height / 2))) {
        mario->score++;
        sfSprite_setPosition(GAME.sprite.coin4, (sfVector2f){-100, 0});
    }
    if (sfFloatRect_contains(&mario_rect, (coin_rect5.left + coin_rect5.width
    / 2), (coin_rect5.top + coin_rect5.height / 2))) {
        mario->score++;
        sfSprite_setPosition(GAME.sprite.coin5, (sfVector2f){-100, 0});
    }
    if (sfFloatRect_intersects(&mario_rect, &goomba_rect, NULL))
        printf("ekgh\n");
}

void move(mario *mario)
{
    sfVector2f ground_move = {-4, 0};
    sfVector2f mg_move = {-1, 0};
    sfVector2f back_move = {-.5, 0};

    event_mario(mario);
    sfSprite_move(GAME.sprite.ground, ground_move);
    sfSprite_move(GAME.sprite.ground2, ground_move);
    sfSprite_move(GAME.sprite.coin, ground_move);
    sfSprite_move(GAME.sprite.coin2, ground_move);
    sfSprite_move(GAME.sprite.coin3, ground_move);
    sfSprite_move(GAME.sprite.coin4, ground_move);
    sfSprite_move(GAME.sprite.coin5, ground_move);
    sfSprite_move(GAME.sprite.quest, ground_move);
    sfSprite_move(GAME.sprite.quest2, ground_move);
    sfSprite_move(GAME.sprite.mg, mg_move);
    sfSprite_move(GAME.sprite.mg2, mg_move);
    sfSprite_move(GAME.sprite.back, back_move);
    sfSprite_move(GAME.sprite.back2, back_move);
    sfSprite_move(GAME.sprite.goomba, (sfVector2f){ground_move.x - .7,
    ground_move.y});
    paralax(mario);
}

void event_game(mario *mario)
{
    colision(mario);
    move(mario);
}