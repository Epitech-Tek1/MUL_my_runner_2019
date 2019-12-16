/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** runner
*/

#ifndef RUNNER_H_
#define RUNNER_H_


////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Graphics.h>
#include "transform.h"


////////////////////////////////////////////////////////////
/// \brief 2-Defined the height of the window
///
////////////////////////////////////////////////////////////
#define SCREEN_HEIGHT 1080


////////////////////////////////////////////////////////////
/// \brief 2-Defined the width of the window
///
////////////////////////////////////////////////////////////
#define SCREEN_WIDTH 1920


////////////////////////////////////////////////////////////
/// \brief 2-component SFML window variables
///
////////////////////////////////////////////////////////////
typedef struct
{
    sfVideoMode mode;
    sfRenderWindow *window;
    sfSprite *sprite;
    sfTexture *texture;
} window;


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
/// \brief Struct contains all menu text
///
////////////////////////////////////////////////////////////
typedef struct
{

} text;


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
    text text;
} _menu;


////////////////////////////////////////////////////////////
/// \brief Call function to parameter and draw sprite
///
/// \param _menu Struct contains all menu's elements
///
/// \return void
////////////////////////////////////////////////////////////
void sfDisplayMenuSprite(window *window, _menu *_menu);


////////////////////////////////////////////////////////////
/// \brief Init sprite, texture
///
/// \param window Struct contains window's informations
/// \param _menu Struct contains all menu's elements
///
/// \return void
////////////////////////////////////////////////////////////
void sfSpriteMenuCreate(window *window, _menu *_menu);


////////////////////////////////////////////////////////////
/// \brief Draw the menu of the game's
///
/// \param window Struct contains window's informations
/// \param game_mode Boolean evaluation of drawing menu
///
/// \return boolean
////////////////////////////////////////////////////////////
_Bool sfInitMenu(window *window, _Bool *game_mod, _menu *_menu);


////////////////////////////////////////////////////////////
/// \brief Draw the game of the game's
///
/// \param window Struct contains window's informations
/// \param game_mode Boolean evaluation of drawing game
///
/// \return boolean
////////////////////////////////////////////////////////////
_Bool sfInitGame(window *window, _Bool *game_mod, _menu *_menu);

_Bool sfMouseHover(window *window, _menu *_menu, transform *transform);

_Bool init_transform(window *window, _menu *_menu, transform *transform);

_Bool sfSpriteTransform(window *window, _menu *_menu);

#endif /* !RUNNER_H_ */