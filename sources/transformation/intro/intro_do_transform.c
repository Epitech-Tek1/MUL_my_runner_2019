/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** intro_do_transform
*/

#include "runner.h"

static void sprite_set_rotate(mario_t *mario)
{
    sfSprite_setScale(INTRO.sprite.intro, TRANS.scale.intro);
}

static void sprite_set_position(mario_t *mario)
{
    sfSprite_setPosition(INTRO.sprite.intro, TRANS.position.intro);
}

void intro_do_transform(mario_t *mario)
{
    intro_init_transform(mario);
    sprite_set_position(mario);
    sprite_set_rotate(mario);
    mouse_hover(mario);
}