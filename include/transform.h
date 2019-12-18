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
    sfVector2f pipe_game;
    sfVector2f pipe_new;
    sfVector2f pipe_gen;
    sfVector2f pipe_op;
    sfVector2f game;
    sfVector2f new;
    sfVector2f gen;
    sfVector2f op;
} scale;

typedef struct
{
    sfVector2f pipe_game;
    sfVector2f pipe_new;
    sfVector2f pipe_gen;
    sfVector2f pipe_op;
    sfVector2f game;
    sfVector2f new;
    sfVector2f gen;
    sfVector2f op;
} position;

typedef struct
{
    scale scale;
    position position;
} transform;

#endif /* !TRANSFORM_H_ */