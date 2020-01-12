/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** sprite_create
*/

#include "runner.h"

static void assembly(mario_t *mario)
{
    sfSprite_setTexture(MENU.sprite.menu, MENU.texture.menu, sfTrue);
    sfSprite_setTexture(MENU.sprite.pipe_game, MENU.texture.pipe_game,
    sfTrue);
    sfSprite_setTexture(MENU.sprite.pipe_new, MENU.texture.pipe_new,
    sfTrue);
    sfSprite_setTexture(MENU.sprite.pipe_gen, MENU.texture.pipe_gen,
    sfTrue);
    sfSprite_setTexture(MENU.sprite.pipe_op, MENU.texture.pipe_op, sfTrue);
    sfSprite_setTexture(MENU.sprite.game, MENU.texture.game, sfTrue);
    sfSprite_setTexture(MENU.sprite.new, MENU.texture.new, sfTrue);
    sfSprite_setTexture(MENU.sprite.gen, MENU.texture.gen, sfTrue);
    sfSprite_setTexture(MENU.sprite.op, MENU.texture.op, sfTrue);
}

static void texture_create(mario_t *mario)
{
    MENU.texture.menu = sfTexture_createFromFile(MINIATURE, NULL);
    MENU.texture.pipe_game = sfTexture_createFromFile(PIPE, NULL);
    MENU.texture.pipe_new = sfTexture_createFromFile(PIPE, NULL);
    MENU.texture.pipe_gen = sfTexture_createFromFile(PIPE, NULL);
    MENU.texture.pipe_op = sfTexture_createFromFile(PIPE, NULL);
    MENU.texture.game = sfTexture_createFromFile(GAME_BTN, NULL);
    MENU.texture.new = sfTexture_createFromFile(NEW_BTN, NULL);
    MENU.texture.gen = sfTexture_createFromFile(GEN_BTN, NULL);
    MENU.texture.op = sfTexture_createFromFile(OP_BTN, NULL);
    assembly(mario);
}

static void sprite_create(mario_t *mario)
{
    MENU.sprite.menu = sfSprite_create();
    MENU.sprite.pipe_game = sfSprite_create();
    MENU.sprite.pipe_new = sfSprite_create();
    MENU.sprite.pipe_gen = sfSprite_create();
    MENU.sprite.pipe_op = sfSprite_create();
    MENU.sprite.game = sfSprite_create();
    MENU.sprite.new = sfSprite_create();
    MENU.sprite.gen = sfSprite_create();
    MENU.sprite.op = sfSprite_create();
    texture_create(mario);
}

static void create_music(mario_t *mario)
{
    GAME.sounds.menu = sfMusic_createFromFile("assets/game/sounds/menu.wav");
}

void sprite_menu_create(mario_t *mario)
{
    sprite_create(mario);
    create_music(mario);
}