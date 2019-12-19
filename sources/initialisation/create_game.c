/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** create_game
*/

#include "runner.h"

static void game_assembly(mario *mario)
{
    sfSprite_setTexture(GAME.sprite.mg, GAME.texture.mg, sfFalse);
}

static void game_texture_create(mario *mario)
{
    GAME.texture.mg = sfTexture_createFromFile(MID_GROUND, NULL);
    game_assembly(mario);
}

static void game_sprite_create(mario *mario)
{
    GAME.sprite.mg = sfSprite_create();
    game_texture_create(mario);
}

void game_create(mario *mario)
{
    game_sprite_create(mario);
}