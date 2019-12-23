/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** runner_define
*/

#ifndef RUNNER_DEFINE_H_
#define RUNNER_DEFINE_H_


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
/// \brief 2-Defined success returned from boolean evaluation
///
////////////////////////////////////////////////////////////
#define true 0

////////////////////////////////////////////////////////////
/// \brief 2-Defined failed returned from boolean evaluation
///
////////////////////////////////////////////////////////////
#define false 1

////////////////////////////////////////////////////////////
/// \brief 2-Define returned 84 if an error occured
///
////////////////////////////////////////////////////////////
#define EXIT_ERROR 84


#define GAME_PARAMS window *window, _menu *_menu, transform *transform

#define MOUSE_POS_X sfMouse_getPositionRenderWindow(WINDOW.window).x

#define MOUSE_POS_Y sfMouse_getPositionRenderWindow(WINDOW.window).y

#define MOUSE_HOVER_PIPE_START 1200 <= MOUSE_POS_X && 180 <= MOUSE_POS_Y && \
    350 >= MOUSE_POS_Y

#define MOUSE_HOVER_PIPE_NEW 1200 <= MOUSE_POS_X && 480 <= MOUSE_POS_Y && \
    650 >= MOUSE_POS_Y

#define MOUSE_HOVER_PIPE_GEN 1200 <= MOUSE_POS_X && 780 <= MOUSE_POS_Y && \
    950 >= MOUSE_POS_Y


//////////////////////////////
///      Menu pictures     ///
//////////////////////////////

#define MINIATURE "assets/menu/menu.jpg"

#define PIPE "assets/menu/pipe.png"

#define GAME_BTN "assets/menu/game.png"

#define NEW_BTN "assets/menu/new.png"

#define GEN_BTN "assets/menu/gen.png"

#define OP_BTN "assets/menu/op.png"

#define INTRO_VID "assets/intro/intro.jpg"

#define MID_GROUND "assets/game/mario_map.png"

#define BACK "assets/game/background.png"

#define GROUND "assets/game/ground.png"

#define MARIO "assets/game/mario.png"

#define BLOCK_INT "assets/game/objets/block_interrogation.png"

#define COIN "assets/game/objets/coin.png"

#define TORTUE "assets/game/objets/tortue.png"


//////////////////////////////
///         Struct         ///
//////////////////////////////

#define MENU mario->_menu

#define WINDOW mario->window

#define TRANS mario->transform

#define INTRO mario->_intro

#define GAME mario->_game

#endif /* !RUNNER_DEFINE_H_ */