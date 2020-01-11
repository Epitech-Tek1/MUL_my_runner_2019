/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** game_init_2
*/

#include "runner.h"

static void assign_scale(mario *mario)
{
    sfSprite_setScale(GAME.sprite.end, (sfVector2f){1.5, 1.5});
    sfSprite_setScale(GAME.sprite.coin11, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin12, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin13, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin14, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin15, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin16, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin17, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin18, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin19, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin20, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin21, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin22, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin23, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.bowser, (sfVector2f){18, 18});
    sfSprite_setScale(GAME.sprite.goomba2, (sfVector2f){.2, .2});
    sfSprite_setScale(GAME.sprite.goomba3, (sfVector2f){.2, .2});
    sfSprite_setScale(GAME.sprite.goomba4, (sfVector2f){.2, .2});
}

static void assign_pos(mario *mario)
{
    SetPos(GAME.sprite.end, (sfVector2f){600, 200});
    SetPos(GAME.sprite.coin11, (sfVector2f){2096, 628});
    SetPos(GAME.sprite.coin12, (sfVector2f){2770, 705});
    SetPos(GAME.sprite.coin13, (sfVector2f){2803, 705});
    SetPos(GAME.sprite.coin14, (sfVector2f){2836, 738});
    SetPos(GAME.sprite.coin15, (sfVector2f){2869, 761});
    SetPos(GAME.sprite.coin16, (sfVector2f){2902, 738});
    SetPos(GAME.sprite.coin17, (sfVector2f){2902, 705});
    SetPos(GAME.sprite.coin18, (sfVector2f){2902, 738});
    SetPos(GAME.sprite.coin19, (sfVector2f){2935, 672});
    SetPos(GAME.sprite.coin20, (sfVector2f){2935, 639});
    SetPos(GAME.sprite.coin21, (sfVector2f){2968, 606});
    SetPos(GAME.sprite.coin22, (sfVector2f){3100, 738});
    SetPos(GAME.sprite.coin23, (sfVector2f){3133, 738});
    SetPos(GAME.sprite.bowser, (sfVector2f){960, 540});
    SetPos(GAME.sprite.goomba2, (sfVector2f){4862, 646});
    SetPos(GAME.sprite.goomba3, (sfVector2f){5070, 646});
    SetPos(GAME.sprite.goomba4, (sfVector2f){5290, 646});
}

void game_init_transform_2(mario *mario)
{
    sfSprite_setOrigin(GAME.sprite.bowser, (sfVector2f){
    sfSprite_getGlobalBounds(GAME.sprite.bowser).width / 2,
    sfSprite_getGlobalBounds(GAME.sprite.bowser).height / 2});
    assign_scale(mario);
    assign_pos(mario);
}