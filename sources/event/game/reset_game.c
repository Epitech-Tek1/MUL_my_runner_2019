/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** reset_game
*/

#include "runner.h"

void reset_game(mario *mario)
{
    sfSprite_destroy(GAME.sprite.bowser);
    initialisation_scene(mario);
    mario->scene = 1;
    mario->const_event = 1;
    mario->jump = 0;
    mario->score = 0;
    mario->is_move = 1;
    mario->is_end = false;
    mario->is_loose = false;
    GAME.sounds.playe_loose = false;
    mario->player.health = true;
    GAME.catch = true;
    GAME.screen_win = false;
    GAME._clock.end_seconds = (double)0;
    GAME._clock.hit_seconds = (double)0;
    initialisation_clock(mario);
    sprite_menu_create(mario);
    sfMusic_play(GAME.sounds.menu);
    game_create(mario);
    game_init_transform(mario);
}