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
    sfSprite_setTexture(GAME.sprite.mg2, GAME.texture.mg, sfFalse);
    sfSprite_setTexture(GAME.sprite.back, GAME.texture.back, sfFalse);
    sfSprite_setTexture(GAME.sprite.back2, GAME.texture.back, sfFalse);
    sfSprite_setTexture(GAME.sprite.ground, GAME.texture.ground, sfFalse);
    sfSprite_setTexture(GAME.sprite.ground2, GAME.texture.ground, sfFalse);
    sfSprite_setTexture(GAME.sprite.mario, GAME.texture.mario, sfFalse);
    sfSprite_setTexture(GAME.sprite.quest, GAME.texture.quest, sfFalse);
    sfSprite_setTexture(GAME.sprite.quest2, GAME.texture.quest, sfFalse);
    sfSprite_setTexture(GAME.sprite.goomba, GAME.texture.goomba, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin2, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin3, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin4, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin5, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin6, GAME.texture.coin, sfFalse);
}

static void game_texture_create(mario *mario)
{
    GAME.texture.mg = sfTexture_createFromFile(MID_GROUND, NULL);
    GAME.texture.back = sfTexture_createFromFile(BACK, NULL);
    GAME.texture.ground = sfTexture_createFromFile(GROUND, NULL);
    GAME.texture.mario = sfTexture_createFromFile(MARIO, NULL);
    GAME.texture.quest = sfTexture_createFromFile(QUEST, NULL);
    GAME.texture.goomba = sfTexture_createFromFile(GOOMBA, NULL);
    GAME.texture.coin = sfTexture_createFromFile(COIN, NULL);
    game_assembly(mario);
}

static void game_sprite_create(mario *mario)
{
    GAME.sprite.mg = sfSprite_create();
    GAME.sprite.mg2 = sfSprite_create();
    GAME.sprite.back = sfSprite_create();
    GAME.sprite.back2 = sfSprite_create();
    GAME.sprite.ground = sfSprite_create();
    GAME.sprite.ground2 = sfSprite_create();
    GAME.sprite.mario = sfSprite_create();
    GAME.sprite.quest = sfSprite_create();
    GAME.sprite.quest2 = sfSprite_create();
    GAME.sprite.goomba = sfSprite_create();
    GAME.sprite.coin = sfSprite_create();
    GAME.sprite.coin2 = sfSprite_create();
    GAME.sprite.coin3 = sfSprite_create();
    GAME.sprite.coin4 = sfSprite_create();
    GAME.sprite.coin5 = sfSprite_create();
    GAME.sprite.coin6 = sfSprite_create();
    game_texture_create(mario);
}

static void shape_collision(mario *mario)
{
    GAME._colision.ground = sfRectangleShape_create();
    GAME._colision.mountain = sfRectangleShape_create();
    GAME._colision.mountain2 = sfRectangleShape_create();
    GAME._colision.mountain3 = sfRectangleShape_create();
    GAME._colision.mountain4 = sfRectangleShape_create();
    GAME._colision.mountain5 = sfRectangleShape_create();
    GAME._colision.mountain6 = sfRectangleShape_create();
}

void game_create(mario *mario)
{
    game_sprite_create(mario);
    game_create2(mario);
    shape_collision(mario);
}