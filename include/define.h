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
#define SGB sfSprite_getGlobalBounds
#define SetPos sfSprite_setPosition
#define smove sfSprite_move
#define GetPos sfSprite_getPosition
#define RecShapePos sfRectangleShape_setPosition
#define DrawRecShape sfRenderWindow_drawRectangleShape



#define cr_x coin_rect.left + coin_rect.width

#define cr_y coin_rect.top + coin_rect.height

#define cr2_x coin_rect2.left + coin_rect2.width

#define cr2_y coin_rect2.top + coin_rect2.height

#define cr3_x coin_rect3.left + coin_rect3.width

#define cr3_y coin_rect3.top + coin_rect3.height

#define cr4_x coin_rect4.left + coin_rect4.width

#define cr4_y coin_rect4.top + coin_rect4.height

#define cr5_x coin_rect5.left + coin_rect5.width

#define cr5_y coin_rect5.top + coin_rect5.height

#define cr7_x coin_rect7.left + coin_rect7.width

#define cr7_y coin_rect7.top + coin_rect7.height

#define cr8_x coin_rect8.left + coin_rect8.width

#define cr8_y coin_rect8.top + coin_rect8.height

#define cr9_x coin_rect9.left + coin_rect9.width

#define cr9_y coin_rect9.top + coin_rect9.height

#define cr10_x coin_rect10.left + coin_rect10.width

#define cr10_y coin_rect10.top + coin_rect10.height

#define SCORE mario->score

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


//////////////////////////////
///         Struct         ///
//////////////////////////////

#define MENU mario->_menu

#define WINDOW mario->window

#define TRANS mario->transform

#define INTRO mario->_intro

#define GAME mario->_game

#endif /* !RUNNER_DEFINE_H_ */