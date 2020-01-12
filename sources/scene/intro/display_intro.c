/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** display_intro
*/

#include "runner.h"

void intro_display(mario_t *mario)
{
    event_intro(mario);
    sfRenderWindow_drawSprite(WINDOW.window, INTRO.sprite.intro, NULL);
}