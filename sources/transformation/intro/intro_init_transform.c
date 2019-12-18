/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** intro_menu_transform
*/

#include "runner.h"

static void set_scale(mario *mario)
{

}

static void set_position(mario *mario)
{
    TRANS.position.intro.x = 460;
    TRANS.position.intro.y = 260;
}

void intro_init_transform(mario *mario)
{
    set_scale(mario);
    set_position(mario);
}