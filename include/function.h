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
void sprite_menu_create(mario *mario);


////////////////////////////////////////////////////////////
/// \brief Draw the menu of the game's
///
/// \param window Struct contains window's informations
/// \param game_mode Boolean evaluation of drawing menu
///
/// \return boolean
////////////////////////////////////////////////////////////
void menu_init(mario *mario);


////////////////////////////////////////////////////////////
/// \brief Draw the game of the game's
///
/// \param window Struct contains window's informations
/// \param game_mode Boolean evaluation of drawing game
///
/// \return boolean
////////////////////////////////////////////////////////////
void game_init(mario *mario);

void mouse_hover(mario *mario);

void menu_init_transform(mario *mario);

void menu_do_transform(mario *mario);

_Bool sprite_transform(mario *mario);

_Bool destroy_menu(mario *mario);

void event_start(mario *mario);

int game_loop(mario *mario);

void intro(mario *mario);

void intro_create(mario *mario);

void intro_display(mario *mario);

void intro_init(mario *mario);

void intro_do_transform(mario *mario);

void intro_init_transform(mario *mario);

void event_intro(mario *mario);

int initialisation(mario *mario, int ac, char *filepath);

void game_display(mario *mario);

void game(mario *mario);

void game_create(mario *mario);

void event_game(mario *mario);

void game_display(mario *mario);

void game_init_transform(mario *mario);

void game_do_transform(mario *mario);

void event_key(mario *mario);

void event_map(mario *mario);

void quest(mario *mario, sfSprite *sprite);

void coin(mario *mario, sfSprite *sprite);

void goomba(mario *mario, sfSprite *sprite);

_Bool intersection_wall(mario *mario);

void event_mario(mario *mario);

void static_mario(mario *mario);

void event_jump(mario *mario);

void move(mario *mario);

void event_damage(mario *mario);

void event_fall(mario *mario);

void colision_mountain(mario *mario);

void colision_coin(mario *mario);

void colision_ennemies(mario *mario);

void game_create2(mario *mario);

#endif /* !FUNCTION_H_ */