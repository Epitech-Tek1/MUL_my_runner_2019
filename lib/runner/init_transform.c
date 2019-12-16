/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** init_transform
*/

#include "../../include/main.h"
#include "../../include/runner.h"
#include "transform.h"

static void sfScale(transform *transform, _menu *_menu)
{
    transform->scale.pipe_game.x = 1.1;
    transform->scale.pipe_game.y = .4;
    transform->scale.pipe_new.x = 1.1;
    transform->scale.pipe_new.y = .4;
    transform->scale.pipe_gen.x = 1.1;
    transform->scale.pipe_gen.y = .4;
    transform->scale.pipe_op.x = 1.1;
    transform->scale.pipe_op.y = .4;
    transform->scale.game.x = .45;
    transform->scale.game.y = .45;
    transform->scale.new.x = .45;
    transform->scale.new.y = .45;
    transform->scale.gen.x = .45;
    transform->scale.gen.y = .45;
    transform->scale.op.x = .45;
    transform->scale.op.y = .45;
}

static void sfPosition(window *window, transform *transform, _menu *_menu)
{
    transform->position.pipe_game.x = 1920;
    transform->position.pipe_game.y = 350;
    transform->position.pipe_new.x = 1920;
    transform->position.pipe_new.y = 550;
    transform->position.pipe_gen.x = 1920;
    transform->position.pipe_gen.y = 750;
    transform->position.pipe_op.x = 1920;
    transform->position.pipe_op.y = 950;
    transform->position.game.x = 1450;
    transform->position.game.y = 250;
    transform->position.new.x = 1450;
    transform->position.new.y = 450;
    transform->position.gen.x = 1450;
    transform->position.gen.y = 650;
    transform->position.op.x = 1450;
    transform->position.op.y = 850;
}

_Bool init_transform(window *window, _menu *_menu, transform *transform)
{
    sfScale(transform, _menu);
    sfPosition(window, transform, _menu);
    return (sfMouseHover(window, _menu, transform));
}