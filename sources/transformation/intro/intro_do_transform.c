/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** intro_do_transform
*/

#include "runner.h"

static void sprite_set_rotate(mario *mario)
{
}

static void sprite_set_position(mario *mario)
{
    sfSprite_setPosition(INTRO.sprite.intro, TRANS.position.intro);
}

static void sprite_set_scale(mario *mario)
{
}

void intro_do_transform(mario *mario)
{
    intro_init_transform(mario);
    sprite_set_scale(mario);
    sprite_set_position(mario);
    sprite_set_rotate(mario);
    mouse_hover(mario);
}