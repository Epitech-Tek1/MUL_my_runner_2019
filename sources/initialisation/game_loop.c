/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** game_loop
*/

#include "runner.h"

static void (* event_fct[])(mario *mario) = {
    event_intro,
    event_start,
    event_game
};

static void event_run(mario *mario)
{
    mario->jump = 0;
}

static void (* event_key_fct[])(mario *mario) = {
    event_run,
    event_jump
};

static void manage_event(mario *mario)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(WINDOW.window, &event)) {
        event_fct[mario->const_event](mario);
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            mario->jump = 1;
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(WINDOW.window);
    }
}

static void (* display_fct[])(mario *mario) = {
    intro,
    menu,
    game
};

int game_loop(mario *mario)
{
    sfClock_restart(INTRO.evt.clock);
    while (sfRenderWindow_isOpen(WINDOW.window)) {
        manage_event(mario);
        event_key_fct[mario->jump](mario);
        sfRenderWindow_setFramerateLimit(WINDOW.window, 1000);
        sfRenderWindow_clear(WINDOW.window, sfBlack);
        display_fct[mario->scene](mario);
        sfRenderWindow_display(WINDOW.window);
    }
    sfRenderWindow_destroy(WINDOW.window);
    return (true);
}