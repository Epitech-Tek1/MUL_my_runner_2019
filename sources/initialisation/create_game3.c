/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** create_game3
*/

#include "runner.h"

static void game_assembly(mario *mario)
{
    sfSprite_setTexture(GAME.sprite.goomba2, GAME.texture.goomba, sfFalse);
    sfSprite_setTexture(GAME.sprite.goomba3, GAME.texture.goomba, sfFalse);
    sfSprite_setTexture(GAME.sprite.goomba4, GAME.texture.goomba, sfFalse);
}

static void game_texture_create(mario *mario)
{
    game_assembly(mario);
}

static void game_sprite_create(mario *mario)
{
    GAME.sprite.goomba2 = sfSprite_create();
    GAME.sprite.goomba3 = sfSprite_create();
    GAME.sprite.goomba4 = sfSprite_create();
    game_texture_create(mario);
}

static void create_music(mario *mario)
{
}

void game_create3(mario *mario)
{
    game_sprite_create(mario);
    create_music(mario);
}