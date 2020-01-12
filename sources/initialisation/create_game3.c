/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** create_game3
*/

#include "runner.h"

static void game_assembly(mario_t *mario)
{
    sfSprite_setTexture(GAME.sprite.coin7, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin8, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin9, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.goomba2, GAME.texture.goomba, sfFalse);
    sfSprite_setTexture(GAME.sprite.goomba3, GAME.texture.goomba, sfFalse);
    sfSprite_setTexture(GAME.sprite.goomba4, GAME.texture.goomba, sfFalse);
    sfSprite_setTexture(GAME.sprite.champ, GAME.texture.champ, sfFalse);
    sfSprite_setTexture(GAME.sprite.flower, GAME.texture.flower, sfFalse);
    sfSprite_setTexture(GAME.sprite.flower2, GAME.texture.flower, sfFalse);
    sfSprite_setTexture(GAME.sprite.flower3, GAME.texture.flower, sfFalse);
    sfSprite_setTexture(GAME.sprite.flower4, GAME.texture.flower, sfFalse);
    sfSprite_setTexture(GAME.sprite.flower5, GAME.texture.flower, sfFalse);
    sfSprite_setTexture(GAME.sprite.flower6, GAME.texture.flower, sfFalse);
}

static void game_texture_create(mario_t *mario)
{
    GAME.texture.champ = sfTexture_createFromFile("assets/game/champ.png",
    NULL);
    GAME.texture.brocken = sfTexture_createFromFile("assets/game/brocken.png",
    NULL);
    GAME.texture.flower = sfTexture_createFromFile(FLOWER, NULL);
    game_assembly(mario);
}

static void game_sprite_create(mario_t *mario)
{
    GAME.sprite.coin7 = sfSprite_create();
    GAME.sprite.coin8 = sfSprite_create();
    GAME.sprite.coin9 = sfSprite_create();
    GAME.sprite.goomba2 = sfSprite_create();
    GAME.sprite.goomba3 = sfSprite_create();
    GAME.sprite.goomba4 = sfSprite_create();
    GAME.sprite.champ = sfSprite_create();
    GAME.sprite.flower = sfSprite_create();
    GAME.sprite.flower2 = sfSprite_create();
    GAME.sprite.flower3 = sfSprite_create();
    GAME.sprite.flower4 = sfSprite_create();
    GAME.sprite.flower5 = sfSprite_create();
    GAME.sprite.flower6 = sfSprite_create();
    game_texture_create(mario);
}

void game_create3(mario_t *mario)
{
    game_sprite_create(mario);
}