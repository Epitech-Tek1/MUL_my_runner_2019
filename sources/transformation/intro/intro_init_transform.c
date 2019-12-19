/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** intro_menu_transform
*/

#include "runner.h"

static void set_scale(mario *mario)
{
    TRANS.scale.intro.x = 2;
    TRANS.scale.intro.y = 2.1;
}

static void set_position(mario *mario)
{
    TRANS.position.intro.x = 0;
    TRANS.position.intro.y = 0;
}

void intro_init_transform(mario *mario)
{
    set_scale(mario);
    set_position(mario);
}