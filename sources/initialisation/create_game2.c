/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** create_game2
*/

#include "runner.h"

static void game_assembly(mario *mario)
{
    sfSprite_setTexture(GAME.sprite.coin7, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin8, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin9, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin10, GAME.texture.coin, sfFalse);
}

static void game_texture_create(mario *mario)
{
    game_assembly(mario);
}

static void game_sprite_create(mario *mario)
{
    GAME.sprite.coin7 = sfSprite_create();
    GAME.sprite.coin8 = sfSprite_create();
    GAME.sprite.coin9 = sfSprite_create();
    GAME.sprite.coin10 = sfSprite_create();
    game_texture_create(mario);
}

void game_create2(mario *mario)
{
    game_sprite_create(mario);
}