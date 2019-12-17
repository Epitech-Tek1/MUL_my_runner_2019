/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** function
*/

#ifndef FUNCTION_H_
#define FUNCTION_H_

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

#endif /* !FUNCTION_H_ */