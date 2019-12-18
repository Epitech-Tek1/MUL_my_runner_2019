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

static void manage_event(mario *mario)
{
    sfEvent event;
    _menu *_menu;

    while (sfRenderWindow_pollEvent(WINDOW.window, &event)) {
        event_start(mario);
        // if (mario->event_start.mouseButton.type == sfEvtMouseButtonPressed) {
        //     mario->event_start.mouse_press = 1;
        //     printf("You pressed\n");
        // }
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(WINDOW.window);
    }
}

static void (* display_fct[])(mario *mario) = {
    menu,
    game
};

_Bool game_loop(mario *mario)
{
    while (sfRenderWindow_isOpen(WINDOW.window)) {
        manage_event(mario);
        sfRenderWindow_setFramerateLimit(WINDOW.window, 60);
        sfRenderWindow_clear(WINDOW.window, sfBlack);
        // (!mario->_menu.evt.is_menu) && (sfSpriteTransform(mario) && sfDisplayMenuSprite(mario));
        display_fct[mario->scene](mario);
        sfRenderWindow_display(WINDOW.window);
    }
    sfRenderWindow_destroy(WINDOW.window);
    // destroy(_menu);
    return (true);
}