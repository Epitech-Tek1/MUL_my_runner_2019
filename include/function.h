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
void menu(mario_t *mario);


////////////////////////////////////////////////////////////
/// \brief Call function to parameter and draw sprite
///
/// \param _menu Struct contains all menu's elements
///
/// \return void
////////////////////////////////////////////////////////////
void game(mario_t *mario);

void menu_display(mario_t *mario);


////////////////////////////////////////////////////////////
/// \brief Init sprite, texture
///
/// \param window Struct contains window's informations
/// \param _menu Struct contains all menu's elements
///
/// \return void
////////////////////////////////////////////////////////////
void sprite_menu_create(mario_t *mario);


////////////////////////////////////////////////////////////
/// \brief Draw the menu of the game's
///
/// \param window Struct contains window's informations
/// \param game_mode Boolean evaluation of drawing menu
///
/// \return boolean
////////////////////////////////////////////////////////////
void menu_init(mario_t *mario);


////////////////////////////////////////////////////////////
/// \brief Draw the game of the game's
///
/// \param window Struct contains window's informations
/// \param game_mode Boolean evaluation of drawing game
///
/// \return boolean
////////////////////////////////////////////////////////////
void game_init(mario_t *mario);

void mouse_hover(mario_t *mario);

void menu_init_transform(mario_t *mario);

void menu_do_transform(mario_t *mario);

_Bool sprite_transform(mario_t *mario);

_Bool destroy_menu(mario_t *mario);

void event_start(mario_t *mario);

int game_loop(mario_t *mario);

void intro(mario_t *mario);

void intro_create(mario_t *mario);

void intro_display(mario_t *mario);

void intro_init(mario_t *mario);

void intro_do_transform(mario_t *mario);

void intro_init_transform(mario_t *mario);

void event_intro(mario_t *mario);

int initialisation(mario_t *mario, int ac, char *filepath);

void game_display(mario_t *mario);

void game(mario_t *mario);

void game_create(mario_t *mario);

void event_game(mario_t *mario);

void game_display(mario_t *mario);

void game_init_transform(mario_t *mario);

void game_do_transform(mario_t *mario);

void event_key(mario_t *mario);

void event_map(mario_t *mario);

void quest(mario_t *mario, sfSprite *sprite);

void coin(mario_t *mario, sfSprite *sprite);

void goomba(mario_t *mario, sfSprite *sprite);

_Bool intersection_wall(mario_t *mario);

void event_mario(mario_t *mario);

void static_mario(mario_t *mario);

void event_jump(mario_t *mario);

void move(mario_t *mario, char **s_arr);

void event_damage(mario_t *mario);

void event_fall(mario_t *mario);

void colision_mountain(mario_t *mario);

void colision_coin(mario_t *mario);

void colision_ennemies(mario_t *mario);

void game_create2(mario_t *mario);

void event_win(mario_t *mario);

void game_init_transform_2(mario_t *mario);

void event_loose(mario_t *mario);

void reset_game(mario_t *mario);

void initialisation_clock(mario_t *mario);

void initialisation_scene(mario_t *mario);

void game_create3(mario_t *mario);

void colision_pipe(mario_t *mario);

void colision_quest(mario_t *mario);

void champ(mario_t *mario, sfSprite *sprite);

void event_grow(mario_t *mario);

#endif /* !FUNCTION_H_ */