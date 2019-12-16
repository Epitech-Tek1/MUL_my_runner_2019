/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** runner_define
*/

#ifndef RUNNER_DEFINE_H_
#define RUNNER_DEFINE_H_

#define GAME_PARAMS window *window, _menu *_menu, transform *transform

#define MOUSE_POS_X sfMouse_getPositionRenderWindow(window->window).x

#define MOUSE_POS_Y sfMouse_getPositionRenderWindow(window->window).y

#define MOUSE_HOVER_PIPE_START (1200 <= MOUSE_POS_X AND 180 <= MOUSE_POS_Y AND\
    350 >= MOUSE_POS_Y)

#define MOUSE_HOVER_PIPE_NEW (1200 <= MOUSE_POS_X AND 380 <= MOUSE_POS_Y AND\
    550 >= MOUSE_POS_Y)

#define MOUSE_HOVER_PIPE_GEN (1200 <= MOUSE_POS_X AND 580 <= MOUSE_POS_Y AND\
    750 >= MOUSE_POS_Y)

#define MOUSE_HOVER_PIPE_OP (1200 <= MOUSE_POS_X AND 780 <= MOUSE_POS_Y AND\
    950 >= MOUSE_POS_Y)

#endif /* !RUNNER_DEFINE_H_ */