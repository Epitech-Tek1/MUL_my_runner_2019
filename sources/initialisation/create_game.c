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
    sfSprite_setTexture(GAME.sprite.mg2, GAME.texture.mg2, sfFalse);
    sfSprite_setTexture(GAME.sprite.back, GAME.texture.back, sfFalse);
    sfSprite_setTexture(GAME.sprite.ground, GAME.texture.ground, sfFalse);
    sfSprite_setTexture(GAME.sprite.mario, GAME.texture.mario, sfFalse);
    sfSprite_setTexture(GAME.sprite.quest, GAME.texture.quest, sfFalse);
    sfSprite_setTexture(GAME.sprite.quest2, GAME.texture.quest, sfFalse);
}

static void game_texture_create(mario *mario)
{
    GAME.texture.mg = sfTexture_createFromFile(MID_GROUND, NULL);
    GAME.texture.mg2 = sfTexture_createFromFile(MID_GROUND, NULL);
    GAME.texture.back = sfTexture_createFromFile(BACK, NULL);
    GAME.texture.ground = sfTexture_createFromFile(GROUND, NULL);
    GAME.texture.mario = sfTexture_createFromFile(MARIO, NULL);
    GAME.texture.quest = sfTexture_createFromFile(QUEST, NULL);
    game_assembly(mario);
}

static void game_sprite_create(mario *mario)
{
    GAME.sprite.mg = sfSprite_create();
    GAME.sprite.mg2 = sfSprite_create();
    GAME.sprite.back = sfSprite_create();
    GAME.sprite.ground = sfSprite_create();
    GAME.sprite.mario = sfSprite_create();
    GAME.sprite.quest = sfSprite_create();
    GAME.sprite.quest2 = sfSprite_create();
    game_texture_create(mario);
}

void game_create(mario *mario)
{
    game_sprite_create(mario);
}