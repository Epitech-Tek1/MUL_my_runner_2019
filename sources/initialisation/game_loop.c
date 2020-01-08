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


}

static void (* display_fct[])(mario *mario) = {
    intro,
    menu,
    game
};

int game_loop(mario *mario)
{
    sfEvent event;
    sfText *score = sfText_create();
    sfFont *font = sfFont_createFromFile("assets/fonts/Roboto-Black.ttf");
    int i = 0;
    char *my_score = my_strdup(my_itos(SCORE));

    sfText_setPosition(score, (sfVector2f){1920 - 50, 20});
    sfClock_restart(INTRO.evt.clock);
    while (sfRenderWindow_isOpen(WINDOW.window)) {
        while (sfRenderWindow_pollEvent(WINDOW.window, &event))
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(WINDOW.window);
        event_fct[mario->const_event](mario);
        if (sfKeyboard_isKeyPressed(sfKeySpace))
                mario->jump = 1;
        manage_event(mario);
        event_key_fct[mario->jump](mario);
        sfRenderWindow_setFramerateLimit(WINDOW.window, 60);
        sfRenderWindow_clear(WINDOW.window, sfBlack);
        display_fct[mario->scene](mario);
        sfText_setFont(score, font);
        sfText_setString(score, (SCORE == 0) ? "0" : my_itos(SCORE));
        sfRenderWindow_drawText(mario->window.window, score, NULL);
        sfRenderWindow_display(WINDOW.window);
    }
    sfRenderWindow_destroy(WINDOW.window);
    return (true);
}