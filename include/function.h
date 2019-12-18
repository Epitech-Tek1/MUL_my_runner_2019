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
void menu(mario *mario);


////////////////////////////////////////////////////////////
/// \brief Call function to parameter and draw sprite
///
/// \param _menu Struct contains all menu's elements
///
/// \return void
////////////////////////////////////////////////////////////
void game(mario *mario);

void menu_display(mario *mario);


////////////////////////////////////////////////////////////
/// \brief Init sprite, texture
///
/// \param window Struct contains window's informations
/// \param _menu Struct contains all menu's elements
///
/// \return void
////////////////////////////////////////////////////////////
void sfSpriteMenuCreate(mario *mario);


////////////////////////////////////////////////////////////
/// \brief Draw the menu of the game's
///
/// \param window Struct contains window's informations
/// \param game_mode Boolean evaluation of drawing menu
///
/// \return boolean
////////////////////////////////////////////////////////////
_Bool sfInitMenu(mario *mario);


////////////////////////////////////////////////////////////
/// \brief Draw the game of the game's
///
/// \param window Struct contains window's informations
/// \param game_mode Boolean evaluation of drawing game
///
/// \return boolean
////////////////////////////////////////////////////////////
_Bool sfInitGame(mario *mario);

_Bool sfMouseHover(mario *mario);

_Bool init_transform(mario *mario);

_Bool sfSpriteTransform(mario *mario);

_Bool destroy_menu(mario *mario);

void event_start(mario *mario);

_Bool game_loop(mario *mario);

void intro(mario *mario);

void intro_create(mario *mario);

void intro_display(mario *mario);

void intro_init(mario *mario);

#endif /* !FUNCTION_H_ */