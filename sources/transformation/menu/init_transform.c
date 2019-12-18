/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** init_transform
*/

#include "runner.h"

static void sfScale(mario *mario)
{
    TRANS.scale.pipe_game.x = 1.1;
    TRANS.scale.pipe_game.y = .4;
    TRANS.scale.pipe_new.x = 1.1;
    TRANS.scale.pipe_new.y = .4;
    TRANS.scale.pipe_gen.x = 1.1;
    TRANS.scale.pipe_gen.y = .4;
    TRANS.scale.pipe_op.x = 1.1;
    TRANS.scale.pipe_op.y = .4;
    TRANS.scale.game.x = .45;
    TRANS.scale.game.y = .45;
    TRANS.scale.new.x = .45;
    TRANS.scale.new.y = .45;
    TRANS.scale.gen.x = .45;
    TRANS.scale.gen.y = .45;
    TRANS.scale.op.x = .45;
    TRANS.scale.op.y = .45;
}

static void sfPosition(mario *mario)
{
    TRANS.position.pipe_game.x = 1920;
    TRANS.position.pipe_game.y = 350;
    TRANS.position.pipe_new.x = 1920;
    TRANS.position.pipe_new.y = 550;
    TRANS.position.pipe_gen.x = 1920;
    TRANS.position.pipe_gen.y = 750;
    TRANS.position.pipe_op.x = 1920;
    TRANS.position.pipe_op.y = 950;
    TRANS.position.game.x = 1450;
    TRANS.position.game.y = 250;
    TRANS.position.new.x = 1450;
    TRANS.position.new.y = 450;
    TRANS.position.gen.x = 1450;
    TRANS.position.gen.y = 650;
    TRANS.position.op.x = 1450;
    TRANS.position.op.y = 850;
}

_Bool init_transform(mario *mario)
{
    sfScale(mario);
    sfPosition(mario);
    return (sfMouseHover(mario));
}