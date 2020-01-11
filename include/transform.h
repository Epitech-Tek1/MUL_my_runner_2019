/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** Transform
*/

#ifndef TRANSFORM_H_
#define TRANSFORM_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////
/// \brief 2-component SFML window variables
///
////////////////////////////////////////////////////////////
typedef struct
{
    sfVector2f pipe_game, pipe_new, pipe_gen, pipe_op, pipe;
    sfVector2f game;
    sfVector2f new;
    sfVector2f gen;
    sfVector2f op;
    sfVector2f intro;
    sfVector2f back;
    sfVector2f back2;
    sfVector2f ground;
    sfVector2f mario;
    sfVector2f mg;
    sfVector2f mg2;
    sfVector2f quest, quest2;
    sfVector2f coin;
    sfVector2f goomba, goomba2, goomba3, goomba4;
    sfVector2f end;
} scale;

typedef struct
{
    sfVector2f pipe_game, pipe_new, pipe_gen, pipe_op, pipe;
    sfVector2f game;
    sfVector2f new;
    sfVector2f gen;
    sfVector2f op;
    sfVector2f intro;
    sfVector2f mg_global, mg, mg2;
    sfVector2f back, back2;
    sfVector2f ground, ground2;
    sfVector2f mario;
    sfVector2f quest, quest2;
    sfVector2f coin, coin2, coin3, coin4, coin5, coin6, coin7, coin8,
    coin9, coin10, coin11, coin12, coin13, coin14, coin15, coin16, coin17,
    coin18, coin19, coin20, coin21, coin22, coin23;
    sfVector2f goomba, goomba2, goomba3, goomba4;
    sfVector2f flag;
    sfVector2f end;
    sfVector2f winscreen;
} position;

typedef struct
{
    scale scale;
    position position;
} transform;

#endif /* !TRANSFORM_H_ */