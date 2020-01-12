/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** create_game2
*/

#include "runner.h"

static void game_assembly(mario_t *mario)
{
    sfSprite_setTexture(GAME.sprite.coin10, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin11, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin12, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin13, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin14, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin15, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin16, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin17, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin18, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin19, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin20, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin21, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin22, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.coin23, GAME.texture.coin, sfFalse);
    sfSprite_setTexture(GAME.sprite.pipe, GAME.texture.pipe, sfFalse);
    sfSprite_setTexture(GAME.sprite.flag, GAME.texture.flag, sfFalse);
}

static void game_texture_create(mario_t *mario)
{
    GAME.texture.flag = sfTexture_createFromFile("assets/game/flag.png", NULL);
    GAME.texture.end = sfTexture_createFromFile("assets/game/end.png", NULL);
    GAME.texture.pipe = sfTexture_createFromFile("assets/game/pipe.png", NULL);
    GAME.texture.bowser = sfTexture_createFromFile("assets/game/bowser.png",
    NULL);
    GAME.texture.winScreen =
    sfTexture_createFromFile("assets/game/WinScreen.png", NULL);
    game_assembly(mario);
    sfSprite_setTexture(GAME.sprite.end, GAME.texture.end, sfFalse);
    sfSprite_setTexture(GAME.sprite.bowser, GAME.texture.bowser, sfFalse);
    sfSprite_setTexture(GAME.sprite.winscreen, GAME.texture.winScreen, sfFalse);
}

static void game_sprite_create(mario_t *mario)
{
    GAME.sprite.coin10 = sfSprite_create();
    GAME.sprite.coin11 = sfSprite_create();
    GAME.sprite.coin12 = sfSprite_create();
    GAME.sprite.coin13 = sfSprite_create();
    GAME.sprite.coin14 = sfSprite_create();
    GAME.sprite.coin15 = sfSprite_create();
    GAME.sprite.coin16 = sfSprite_create();
    GAME.sprite.coin17 = sfSprite_create();
    GAME.sprite.coin18 = sfSprite_create();
    GAME.sprite.coin19 = sfSprite_create();
    GAME.sprite.coin20 = sfSprite_create();
    GAME.sprite.coin21 = sfSprite_create();
    GAME.sprite.coin22 = sfSprite_create();
    GAME.sprite.coin23 = sfSprite_create();
    GAME.sprite.pipe = sfSprite_create();
    GAME.sprite.flag = sfSprite_create();
    GAME.sprite.end = sfSprite_create();
    GAME.sprite.bowser = sfSprite_create();
    GAME.sprite.winscreen = sfSprite_create();
    game_texture_create(mario);
}

static void create_music(mario_t *mario)
{
    GAME.sounds.lvl = sfMusic_createFromFile("assets/game/sounds/LvlMusic.wav");
    GAME.sounds.jump = sfMusic_createFromFile("assets/game/sounds/jump.wav");
    GAME.sounds.coin = sfMusic_createFromFile("assets/game/sounds/piece.wav");
    GAME.sounds.death = sfMusic_createFromFile("assets/game/sounds/death.wav");
    GAME.sounds.win = sfMusic_createFromFile("assets/game/sounds/win.wav");
    GAME.sounds.hit = sfMusic_createFromFile("assets/game/sounds/damage.wav");
}

void game_create2(mario_t *mario)
{
    game_sprite_create(mario);
    create_music(mario);
    game_create3(mario);
}