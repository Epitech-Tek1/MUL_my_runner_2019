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
    event_mario(mario);
}

static void (* event_key_fct[])(mario *mario) = {
    event_run,
    event_jump,
    event_fall
};

static void manage_event(mario *mario)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(WINDOW.window, &event)) {
        if (sfMouse_isButtonPressed(sfMouseLeft))
            event_fct[mario->const_event](mario);
        if (sfKeyboard_isKeyPressed(sfKeySpace)) {
            mario->jump = 1;
            sfMusic_play(GAME.sounds.jump);
        }
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
    _Bool life = true;

    while (sfRenderWindow_isOpen(WINDOW.window)) {
        if (sfSprite_getPosition(GAME.sprite.mario).x < -5 && life == true) {
            sfMusic_pause(GAME.sounds.lvl);
            sfMusic_play(GAME.sounds.death);
            life = false;
        }
        manage_event(mario);
        event_key_fct[mario->jump](mario);
        sfRenderWindow_setFramerateLimit(WINDOW.window, 60);
        sfRenderWindow_clear(WINDOW.window, sfBlack);
        display_fct[mario->scene](mario);
        sfText_setString(GAME.score, (SCORE == 0) ? "0" : my_itos(SCORE));
        sfRenderWindow_drawText(mario->window.window, GAME.score, NULL);
        sfRenderWindow_display(WINDOW.window);
    }
    sfRenderWindow_destroy(WINDOW.window);
    return (true);
}