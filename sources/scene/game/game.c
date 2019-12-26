/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** game
*/

#include "runner.h"

static int get_player_position(char *map[])
{
    static int x = 0;
    // la position du player est constante en x soit 1 dans le tableau
    // Celle en y varie en fonction de la hauteur du terrain et des events player
    // Il va falloir prevoir et connaître toujours à l'avance la position en y du player et la stocker
    // Pour la première boucle, le player est à [1; 3];
    if (map[3][x + 1] != '1') {
        map[3][x] = '0';
        ++x;
        map[3][x] = 'P';
        return (x);
    } else {

        return (x);
    }
}

static void test(mario *mario)
{
    int x = get_player_position(mario->map);

    if (mario->map[3][x + 1] == '1')
        printf("Bloqué\n");
    else {
        move(mario);
        for (int i = 0; mario->map[i]; ++i)
            printf("%s\n", mario->map[i]);
        my_putchar('\n');
    }
}

static void game_time(mario *mario)
{
    mario->time = sfClock_getElapsedTime(mario->clock);
    mario->seconds = mario->time.microseconds / 1000000.0;
    if (mario->seconds > 6) {
        if (GAME.evt._game_time.seconds > 1) {
            printf("----------------------------%.f\n", GAME.evt._game_time.seconds);
            test(mario);
            sfClock_restart(GAME.evt._game_time.clock);
        }
    } else {
        move(mario);
    }
}

void game(mario *mario)
{
    game_time(mario);
    game_display(mario);
}