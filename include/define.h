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
/// \brief 2-Define returned 84 if an error occured
///
////////////////////////////////////////////////////////////
#define EXIT_ERROR 84

#define T 1000000.0

#define GAME_PARAMS window *window, _menu *_menu, transform *transform

#define MOUSE_POS_X sfMouse_getPositionRenderWindow(WINDOW.window).x

#define MOUSE_POS_Y sfMouse_getPositionRenderWindow(WINDOW.window).y

#define MOUSE_HOVER_PIPE_START 1200 <= MOUSE_POS_X && 180 <= MOUSE_POS_Y && \
    350 >= MOUSE_POS_Y

#define MOUSE_HOVER_PIPE_NEW 1200 <= MOUSE_POS_X && 480 <= MOUSE_POS_Y && \
    650 >= MOUSE_POS_Y

#define MOUSE_HOVER_PIPE_GEN 1200 <= MOUSE_POS_X && 780 <= MOUSE_POS_Y && \
    950 >= MOUSE_POS_Y

#define MARIO_L (sfSprite_getGlobalBounds(GAME.sprite.mario).left)

#define MARIO_W (sfSprite_getGlobalBounds(GAME.sprite.mario).width + MARIO_L)

#define MARIO_T sfSprite_getGlobalBounds(GAME.sprite.mario).top

#define MARIO_H sfSprite_getGlobalBounds(GAME.sprite.mario).height + + MARIO_T


////////////////////////////////////////////////////////////
/// CSFML defines
///
////////////////////////////////////////////////////////////
#define RecGB sfRectangleShape_getGlobalBounds
#define GETGB sfSprite_getGlobalBounds
#define SGB sfSprite_getGlobalBounds
#define GETS sfSprite_getScale
#define GETP sfSprite_getPosition
#define SETS sfSprite_setScale
#define SETP sfSprite_setPosition
#define RECC sfFloatRect_contains
#define RECI sfFloatRect_intersects
#define smove sfSprite_move
#define RecShapePos sfRectangleShape_setPosition
#define DrawRecShape sfRenderWindow_drawRectangleShape


//////////////////////////////
///      Rect defines      ///
//////////////////////////////

#define gr_x goomba_rect.left + goomba_rect.width

#define gr_y goomba_rect.top + goomba_rect.height


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

#define MID_GROUND "assets/game/middleground.png"

#define BACK "assets/game/background.png"

#define GROUND "assets/game/ground.png"

#define MARIO "assets/game/mario.png"

#define QUEST "assets/game/objets/quest.png"

#define COIN "assets/game/objets/coin.png"

#define TORTUE "assets/game/objets/goomba.png"

#define GOOMBA "assets/game/objets/goomba.png"

#define FLOWER "assets/game/objets/flower.png"

//////////////////////////////
///         Struct         ///
//////////////////////////////

#define MENU mario->_menu

#define WINDOW mario->window

#define TRANS mario->transform

#define INTRO mario->_intro

#define GAME mario->_game

#define SCORE mario->score

#endif /* !RUNNER_DEFINE_H_ */