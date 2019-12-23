/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** init_transform
*/

#include "runner.h"

static void set_scale(mario *mario)
{
    TRANS.scale.game.x = .45;
    TRANS.scale.game.y = .45;
    TRANS.scale.new.x = .45;
    TRANS.scale.new.y = .45;
    TRANS.scale.gen.x = .45;
    TRANS.scale.gen.y = .45;
}

static void set_position(mario *mario)
{
    TRANS.position.pipe_game.x = 1920;
    TRANS.position.pipe_game.y = 350;
    TRANS.position.pipe_new.x = 1920;
    TRANS.position.pipe_new.y = 630;
    TRANS.position.pipe_gen.x = 1920;
    TRANS.position.pipe_gen.y = 930;
    TRANS.position.game.x = 1450;
    TRANS.position.game.y = 250;
    TRANS.position.new.x = 1450;
    TRANS.position.new.y = 540;
    TRANS.position.gen.x = 1450;
    TRANS.position.gen.y = 830;
}

void menu_init_transform(mario *mario)
{
    set_scale(mario);
    set_position(mario);
}