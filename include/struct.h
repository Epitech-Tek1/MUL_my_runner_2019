/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

////////////////////////////////////////////////////////////
/// \brief 2-component SFML window variables
///
////////////////////////////////////////////////////////////
typedef struct
{
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    sfSprite *sprite;
    sfTexture *texture;
} window;


////////////////////////////////////////////////////////////
/// \brief 2-component SFML window variables
///
////////////////////////////////////////////////////////////
typedef struct
{
    sfEvent event_intro;
    sfEvent event_start;
    sfEvent event_new_game;
    sfEvent event_generic;
    sfEvent event_option;
} mario;

////////////////////////////////////////////////////////////
/// \brief Struct contains all menu sprite
///
////////////////////////////////////////////////////////////
typedef struct
{
    sfSprite *menu;
    sfSprite *pipe_game;
    sfSprite *pipe_new;
    sfSprite *pipe_gen;
    sfSprite *pipe_op;
    sfSprite *game;
    sfSprite *new;
    sfSprite *gen;
    sfSprite *op;
} sprite;


////////////////////////////////////////////////////////////
/// \brief Struct contains all menu texture
///
////////////////////////////////////////////////////////////
typedef struct
{
    sfTexture *menu;
    sfTexture *pipe_game;
    sfTexture *pipe_new;
    sfTexture *pipe_gen;
    sfTexture *pipe_op;
    sfTexture *game;
    sfTexture *new;
    sfTexture *gen;
    sfTexture *op;
} texture;


////////////////////////////////////////////////////////////
/// \brief Struct contains all menu's elements
///
/// \e Sprite
/// \e Texture
////////////////////////////////////////////////////////////
typedef struct
{
    sprite sprite;
    texture texture;
} _menu;

#endif /* !STRUCT_H_ */