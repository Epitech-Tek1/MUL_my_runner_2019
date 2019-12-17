/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** game_loop
*/

#include "runner.h"

// static int(* event_fct[])(mario *mario) = {
//     event_intro,
//     event_start,
//     event_new_game,
//     event_generic,
//     event_option
// };

static void manage_event(window *window, mario *mario)
{
    while (sfRenderWindow_pollEvent(window->window, &window->event))
        // if (mario->event_start.mouseButton.type == sfEvtMouseButtonPressed) {
        //     mario->event_start.mouse_press = 1;
        //     printf("You pressed\n");
        // }
        if (window->event.type == sfEvtClosed)
            sfRenderWindow_close(window->window);
}

// static int (* scene_fct[])(marion *mario) = {
//     intro,
//     start,
//     new_game,
//     generic,
//     option
// };

_Bool game_loop(window *window)
{
    _menu *_menu = malloc(sizeof(_menu) * 10000);
    mario *mario = malloc(sizeof(mario));
    static _Bool game_mod = true;

    (!game_mod) ? (sfInitMenu(window, &game_mod, _menu)) :
    (sfInitGame(window, &game_mod, _menu));
    while (sfRenderWindow_isOpen(window->window)) {
        // event_fct[mario->scene](mario);
        manage_event(window, mario);
        sfRenderWindow_setFramerateLimit(window->window, 60);
        sfRenderWindow_clear(window->window, sfBlack);
        sfSpriteTransform(window, _menu);
        sfRenderWindow_display(window->window);
    }
    // destroy(_menu);
    return (true);
}