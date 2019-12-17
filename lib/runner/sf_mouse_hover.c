/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** sf_event_hover
*/

#include "runner.h"

static void start_game(GAME_PARAMS, _Bool *start_game)
{
    transform->scale.pipe_game.x = 1.4;
    transform->scale.pipe_game.y = .4;
}

static void new_game(GAME_PARAMS)
{
    transform->scale.pipe_new.x = 1.4;
    transform->scale.pipe_new.y = .4;
}

static void generic(GAME_PARAMS)
{
    transform->scale.pipe_gen.x = 1.4;
    transform->scale.pipe_gen.y = .4;
}

static void option(GAME_PARAMS)
{
    transform->scale.pipe_op.x = 1.4;
    transform->scale.pipe_op.y = .4;
}

_Bool sfMouseHover(GAME_PARAMS)
{
    _Bool game = false;

    (MOUSE_HOVER_PIPE_START) ? (start_game(window, _menu, transform, &game)) : 0;
    (MOUSE_HOVER_PIPE_NEW) ? (new_game(window, _menu, transform)) : 0;
    (MOUSE_HOVER_PIPE_GEN) ? (generic(window, _menu, transform)) : 0;
    (MOUSE_HOVER_PIPE_OP) ? (option(window, _menu, transform)) : 0;
    return (start_game == true) ? (true) : (false);
}