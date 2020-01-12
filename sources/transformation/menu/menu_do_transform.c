/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** sfSpriteTransform
*/

#include "runner.h"

static void sprite_set_rotate(mario_t *mario)
{
    sfSprite_setRotation(MENU.sprite.pipe_game, 180);
    sfSprite_setRotation(MENU.sprite.pipe_new, 180);
    sfSprite_setRotation(MENU.sprite.pipe_gen, 180);
    sfSprite_setRotation(MENU.sprite.pipe_op, 180);
}

static void sprite_set_position(mario_t *mario)
{
    sfSprite_setPosition(MENU.sprite.pipe_game, TRANS.position.pipe_game);
    sfSprite_setPosition(MENU.sprite.pipe_new, TRANS.position.pipe_new);
    sfSprite_setPosition(MENU.sprite.pipe_gen, TRANS.position.pipe_gen);
    sfSprite_setPosition(MENU.sprite.game, TRANS.position.game);
    sfSprite_setPosition(MENU.sprite.new, TRANS.position.new);
    sfSprite_setPosition(MENU.sprite.gen, TRANS.position.gen);
}

static void sprite_set_scale(mario_t *mario)
{
    sfSprite_setScale(MENU.sprite.pipe_game, TRANS.scale.pipe_game);
    sfSprite_setScale(MENU.sprite.pipe_new, TRANS.scale.pipe_new);
    sfSprite_setScale(MENU.sprite.pipe_gen, TRANS.scale.pipe_gen);
    sfSprite_setScale(MENU.sprite.game, TRANS.scale.game);
    sfSprite_setScale(MENU.sprite.new, TRANS.scale.new);
    sfSprite_setScale(MENU.sprite.gen, TRANS.scale.gen);
}

void menu_do_transform(mario_t *mario)
{
    sprite_set_scale(mario);
    sprite_set_position(mario);
    sprite_set_rotate(mario);
    mouse_hover(mario);
}