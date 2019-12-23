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
    sfVector2f intro;
    sfVector2f back;
    sfVector2f ground;
    sfVector2f mario;
    sfVector2f mg;
    sfVector2f mg2;
    sfVector2f quest;
    sfVector2f quest2;
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
    sfVector2f intro;
    sfVector2f mg_global;
    sfVector2f mg;
    sfVector2f mg2;
    sfVector2f back;
    sfVector2f ground;
    sfVector2f mario;
    sfVector2f quest;
    sfVector2f quest2;
} position;

typedef struct
{
    scale scale;
    position position;
} transform;

#endif /* !TRANSFORM_H_ */