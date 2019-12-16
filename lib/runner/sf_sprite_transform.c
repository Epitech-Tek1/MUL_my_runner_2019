/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** sfSpriteTransform
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "runner.h"
#include "transform.h"

static void sfSpriteSetRotate(transform *transform, _menu *_menu)
{
    sfSprite_setRotation(_menu->sprite.pipe_game, 180);
    sfSprite_setRotation(_menu->sprite.pipe_new, 180);
    sfSprite_setRotation(_menu->sprite.pipe_gen, 180);
    sfSprite_setRotation(_menu->sprite.pipe_op, 180);
}

static void sfSpriteSetPosition(transform *transform, _menu *_menu)
{
    sfSprite_setPosition(_menu->sprite.pipe_game, transform->position.pipe_game)
    ;
    sfSprite_setPosition(_menu->sprite.pipe_new, transform->position.pipe_new);
    sfSprite_setPosition(_menu->sprite.pipe_op, transform->position.pipe_op);
    sfSprite_setPosition(_menu->sprite.pipe_gen, transform->position.pipe_gen);
    sfSprite_setPosition(_menu->sprite.game, transform->position.game);
    sfSprite_setPosition(_menu->sprite.new, transform->position.new);
    sfSprite_setPosition(_menu->sprite.gen, transform->position.gen);
    sfSprite_setPosition(_menu->sprite.op, transform->position.op);
}

static void sfSpriteSetScale(transform *transform, _menu *_menu)
{
    sfSprite_setScale(_menu->sprite.pipe_game, transform->scale.pipe_game);
    sfSprite_setScale(_menu->sprite.pipe_new, transform->scale.pipe_new);
    sfSprite_setScale(_menu->sprite.pipe_gen, transform->scale.pipe_gen);
    sfSprite_setScale(_menu->sprite.pipe_op, transform->scale.pipe_op);
    sfSprite_setScale(_menu->sprite.game, transform->scale.game);
    sfSprite_setScale(_menu->sprite.new, transform->scale.new);
    sfSprite_setScale(_menu->sprite.gen, transform->scale.gen);
    sfSprite_setScale(_menu->sprite.op, transform->scale.op);
}

_Bool sfSpriteTransform(window *window, _menu *_menu)
{
    _Bool start_game;
    sprite *sprite = malloc(sizeof(sprite));
    texture *texture = malloc(sizeof(texture));
    transform *transform = malloc(sizeof(transform) * sizeof(sprite) * sizeof(texture)) ;

    start_game = init_transform(window, _menu, transform);
    sfSpriteSetScale(transform, _menu);
    sfSpriteSetPosition(transform, _menu);
    sfSpriteSetRotate(transform, _menu);
    sfMouseHover(window, _menu, transform);
    return (start_game);
}