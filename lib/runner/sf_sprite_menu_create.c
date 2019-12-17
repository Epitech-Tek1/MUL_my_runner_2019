/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** sprite_create
*/

#include "runner.h"

static void sfAssembly(window *window, _menu *_menu)
{
    sfSprite_setTexture(_menu->sprite.menu, _menu->texture.menu, sfTrue);
    sfSprite_setTexture(_menu->sprite.pipe_game, _menu->texture.pipe_game,
    sfTrue);
    sfSprite_setTexture(_menu->sprite.pipe_new, _menu->texture.pipe_new,
    sfTrue);
    sfSprite_setTexture(_menu->sprite.pipe_gen, _menu->texture.pipe_gen,
    sfTrue);
    sfSprite_setTexture(_menu->sprite.pipe_op, _menu->texture.pipe_op, sfTrue);
    sfSprite_setTexture(_menu->sprite.game, _menu->texture.game, sfTrue);
    sfSprite_setTexture(_menu->sprite.new, _menu->texture.new, sfTrue);
    sfSprite_setTexture(_menu->sprite.gen, _menu->texture.gen, sfTrue);
    sfSprite_setTexture(_menu->sprite.op, _menu->texture.op, sfTrue);
}

static void sfTextureCreate(window *window, _menu *_menu)
{
    _menu->texture.menu = sfTexture_createFromFile(MINIATURE, NULL);
    _menu->texture.pipe_game = sfTexture_createFromFile(PIPE, NULL);
    _menu->texture.pipe_new = sfTexture_createFromFile(PIPE, NULL);
    _menu->texture.pipe_gen = sfTexture_createFromFile(PIPE, NULL);
    _menu->texture.pipe_op = sfTexture_createFromFile(PIPE, NULL);
    _menu->texture.game = sfTexture_createFromFile(GAME_BTN, NULL);
    _menu->texture.new = sfTexture_createFromFile(NEW_BTN, NULL);
    _menu->texture.gen = sfTexture_createFromFile(GEN_BTN, NULL);
    _menu->texture.op = sfTexture_createFromFile(OP_BTN, NULL);
    sfAssembly(window, _menu);
}

static void sfSpriteCreate(window *window, _menu *_menu)
{
    _menu->sprite.menu = sfSprite_create();
    _menu->sprite.pipe_game = sfSprite_create();
    _menu->sprite.pipe_new = sfSprite_create();
    _menu->sprite.pipe_gen = sfSprite_create();
    _menu->sprite.pipe_op = sfSprite_create();
    _menu->sprite.game = sfSprite_create();
    _menu->sprite.new = sfSprite_create();
    _menu->sprite.gen = sfSprite_create();
    _menu->sprite.op = sfSprite_create();
    sfTextureCreate(window, _menu);
}

void sfSpriteMenuCreate(window *window, _menu *_menu)
{
    sfSpriteCreate(window, _menu);
}