/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** create_game3
*/

#include "runner.h"

static void game_assembly(mario_t *mario)
{
    sfSprite_setTexture(GAME.sprite.goomba2, GAME.texture.goomba, sfFalse);
    sfSprite_setTexture(GAME.sprite.goomba3, GAME.texture.goomba, sfFalse);
    sfSprite_setTexture(GAME.sprite.goomba4, GAME.texture.goomba, sfFalse);
    sfSprite_setTexture(GAME.sprite.champ, GAME.texture.champ, sfFalse);
}

static void game_texture_create(mario_t *mario)
{
    GAME.texture.champ = sfTexture_createFromFile("assets/game/champ.png",
    NULL);
    GAME.texture.brocken = sfTexture_createFromFile("assets/game/brocken.png",
    NULL);
    game_assembly(mario);
}

static void game_sprite_create(mario_t *mario)
{
    GAME.sprite.goomba2 = sfSprite_create();
    GAME.sprite.goomba3 = sfSprite_create();
    GAME.sprite.goomba4 = sfSprite_create();
    GAME.sprite.champ = sfSprite_create();
    game_texture_create(mario);
}

void game_create3(mario_t *mario)
{
    game_sprite_create(mario);
}