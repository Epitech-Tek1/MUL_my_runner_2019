/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** colision_quest
*/

#include "runner.h"

#define _ GAME.sprite

static void appear_champ(mario *mario)
{
    sfFloatRect mario_rect = GETGB(GAME.sprite.mario);
    sfFloatRect champ_rect = GETGB(GAME.sprite.champ);

    if (mario->appear == true) {
        static int jump = -15;

        if (jump < 14) {
            jump += 1;
            sfSprite_move(GAME.sprite.champ, (sfVector2f){6, jump});
        }
        if (jump == 14)
            sfSprite_move(GAME.sprite.champ, (sfVector2f){6, jump});
    }
    if (RECI(&mario_rect, &champ_rect, NULL))
        mario->appear = false;
}

static void colision_quest_champ(mario *mario)
{
    sfFloatRect mario_rect = GETGB(GAME.sprite.mario);
    sfFloatRect quest2 = GETGB(GAME.sprite.quest2);

    if (RECC(&quest2, mario_rect.left + (mario_rect.left / 4), mario_rect.top))
    {
        event_fall(mario);
        sfSprite_setTexture(GAME.sprite.quest2, GAME.texture.brocken, sfFalse);
        mario->appear = true;
    }
}

void colision_quest(mario *mario)
{
    sfFloatRect mario_rect = GETGB(GAME.sprite.mario);
    sfFloatRect quest = GETGB(GAME.sprite.quest);
    sfFloatRect quest_left = GETGB(GAME.sprite.quest);
    quest_left.width = .01;

    if (RECI(&mario_rect, &quest_left, NULL)) {
        smove(GAME.sprite.mario, (sfVector2f){-6, 6});
        mario->jump = 0;
    }
    if (RECC(&quest, mario_rect.left + (mario_rect.left / 4), mario_rect.top)) {
        sfMusic_play(GAME.sounds.coin);
        mario->score += 5;
        mario->jump = 0;
        sfSprite_setTexture(GAME.sprite.quest, GAME.texture.brocken, sfFalse);
    }
    colision_quest_champ(mario);
    appear_champ(mario);
}
