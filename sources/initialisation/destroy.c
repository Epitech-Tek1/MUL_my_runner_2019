/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** destroy
*/

#include "runner.h"

_Bool destroy_menu(mario *mario)
{
    sfSprite_destroy(MENU.sprite.game);
    sfSprite_destroy(MENU.sprite.gen);
    sfSprite_destroy(MENU.sprite.menu);
    sfSprite_destroy(MENU.sprite.new);
    sfSprite_destroy(MENU.sprite.op);
    sfSprite_destroy(MENU.sprite.pipe_game);
    sfSprite_destroy(MENU.sprite.pipe_gen);
    sfSprite_destroy(MENU.sprite.pipe_new);
    sfSprite_destroy(MENU.sprite.pipe_op);
    return (true);
}