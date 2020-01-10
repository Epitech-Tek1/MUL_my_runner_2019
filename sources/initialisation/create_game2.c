/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** create_game2
*/

#include "runner.h"

static void game_assembly(mario *mario)
{
    sfSprite_setTexture(GAME.sprite.coin7, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin8, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin9, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin10, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.pipe, GAME.texture.pipe_game, sfFalse);
    sfSprite_setTexture(GAME.sprite.flag, GAME.texture.flag, sfFalse);
}

static void game_texture_create(mario *mario)
{
    GAME.texture.flag = sfTexture_createFromFile("assets/game/flag.png", NULL);
    game_assembly(mario);
}

static void game_sprite_create(mario *mario)
{
    GAME.sprite.coin7 = sfSprite_create();
    GAME.sprite.coin8 = sfSprite_create();
    GAME.sprite.coin9 = sfSprite_create();
    GAME.sprite.coin10 = sfSprite_create();
    GAME.sprite.pipe = sfSprite_create();
    GAME.sprite.flag = sfSprite_create();
    game_texture_create(mario);
}

static void create_music(mario *mario)
{
    GAME.sounds.lvl = sfMusic_createFromFile("assets/game/sounds/LvlMusic.wav");
    GAME.sounds.jump = sfMusic_createFromFile("assets/game/sounds/jump.wav");
    GAME.sounds.coin = sfMusic_createFromFile("assets/game/sounds/piece.wav");
    GAME.sounds.coin2 = sfMusic_createFromFile("assets/game/sounds/piece.wav");
    GAME.sounds.coin3 = sfMusic_createFromFile("assets/game/sounds/piece.wav");
    GAME.sounds.coin4 = sfMusic_createFromFile("assets/game/sounds/piece.wav");
    GAME.sounds.coin5 = sfMusic_createFromFile("assets/game/sounds/piece.wav");
    GAME.sounds.coin7 = sfMusic_createFromFile("assets/game/sounds/piece.wav");
    GAME.sounds.coin8 = sfMusic_createFromFile("assets/game/sounds/piece.wav");
    GAME.sounds.coin9 = sfMusic_createFromFile("assets/game/sounds/piece.wav");
    GAME.sounds.coin10 = sfMusic_createFromFile("assets/game/sounds/piece.wav");
    GAME.sounds.death = sfMusic_createFromFile("assets/game/sounds/death.wav");
    GAME.sounds.win = sfMusic_createFromFile("assets/game/sounds/win.wav");
}

void game_create2(mario *mario)
{
    game_sprite_create(mario);
    create_music(mario);
}