/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** sf_event_hover
*/

#include "runner.h"

static _Bool start_game(GAME_PARAMS, _Bool *start_game)
{
    transform->scale.pipe_game.x = 1.4;
    transform->scale.pipe_game.y = .4;
    return (true);
}

static _Bool new_game(GAME_PARAMS)
{
    transform->scale.pipe_new.x = 1.4;
    transform->scale.pipe_new.y = .4;
    return (true);
}

static _Bool generic(GAME_PARAMS)
{
    transform->scale.pipe_gen.x = 1.4;
    transform->scale.pipe_gen.y = .4;
    return (true);
}

static _Bool option(GAME_PARAMS)
{
    transform->scale.pipe_op.x = 1.4;
    transform->scale.pipe_op.y = .4;
    return (true);
}

_Bool sfMouseHover(GAME_PARAMS)
{
    _Bool game = false;

    (MOUSE_HOVER_PIPE_START) AND (start_game(window, _menu, transform, &game));
    (MOUSE_HOVER_PIPE_NEW) AND (new_game(window, _menu, transform));
    (MOUSE_HOVER_PIPE_GEN) AND (generic(window, _menu, transform));
    (MOUSE_HOVER_PIPE_OP) AND (option(window, _menu, transform));
    return (start_game == true) ? (true) : (false);
}