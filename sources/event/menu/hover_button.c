/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** sf_event_hover
*/

#include "runner.h"

static _Bool start_game(mario *mario)
{
    TRANS.scale.pipe_game.x = 1.4;
    TRANS.scale.pipe_game.y = .4;
    return (true);
}

static _Bool new_game(mario *mario)
{
    TRANS.scale.pipe_new.x = 1.4;
    TRANS.scale.pipe_new.y = .4;
    return (true);
}

static _Bool generic(mario *mario)
{
    TRANS.scale.pipe_gen.x = 1.4;
    TRANS.scale.pipe_gen.y = .4;
    return (true);
}

static _Bool option(mario *mario)
{
    TRANS.scale.pipe_op.x = 1.4;
    TRANS.scale.pipe_op.y = .4;
    return (true);
}

_Bool sfMouseHover(mario *mario)
{
    _Bool game = false;

    if (MOUSE_HOVER_PIPE_START)
        (start_game(mario));
    if (MOUSE_HOVER_PIPE_NEW)
        (new_game(mario));
    if (MOUSE_HOVER_PIPE_GEN)
        (generic(mario));
    if (MOUSE_HOVER_PIPE_OP)
        (option(mario));
    return (game == true) ? (true) : (false);
}