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
    sfColor color;
} window;


////////////////////////////////////////////////////////////
/// \brief Struct contains all menu sprite
///
////////////////////////////////////////////////////////////
typedef struct
{
    sfSprite *intro;
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
    sfTexture *intro;
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


typedef struct
{
    _Bool is_menu;
} evt;


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
    evt evt;
} _menu;


////////////////////////////////////////////////////////////
/// \brief Struct contains all intro's elements
///
/// \e Sprite
/// \e Texture
////////////////////////////////////////////////////////////
typedef struct
{
    sprite sprite;
    texture texture;
} _intro;

typedef struct
{
    window window;
    _menu _menu;
    transform transform;
    _intro _intro;
    int scene;
} mario;


#endif /* !STRUCT_H_ */