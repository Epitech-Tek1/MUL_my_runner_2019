/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** init_transform
*/

#include "runner.h"

static void set_scale(mario *mario)
{
    TRANS.scale.ground.x = 1.5;
    TRANS.scale.ground.y = 1.5;
    TRANS.scale.mg.x = 1.5;
    TRANS.scale.mg.y = 1.5;
    TRANS.scale.mg2.x = 1.5;
    TRANS.scale.mg2.y = 1.5;
    TRANS.scale.mario.x = .13;
    TRANS.scale.mario.y = .13;
    TRANS.scale.quest.x = .17;
    TRANS.scale.quest.y = .17;
    TRANS.scale.coin.x = .25;
    TRANS.scale.coin.y = .25;
    sfSprite_setScale(GAME.sprite.ground, TRANS.scale.ground);
    sfSprite_setScale(GAME.sprite.mario, TRANS.scale.mario);
    sfSprite_setScale(GAME.sprite.mg, TRANS.scale.mg);
    sfSprite_setScale(GAME.sprite.mg2, TRANS.scale.mg2);
    sfSprite_setScale(GAME.sprite.quest, TRANS.scale.quest);
    sfSprite_setScale(GAME.sprite.quest2, TRANS.scale.quest);
    sfSprite_setScale(GAME.sprite.coin, TRANS.scale.coin);
    sfSprite_setScale(GAME.sprite.coin2, TRANS.scale.coin);
    sfSprite_setScale(GAME.sprite.coin3, TRANS.scale.coin);
    sfSprite_setScale(GAME.sprite.coin4, TRANS.scale.coin);
    sfSprite_setScale(GAME.sprite.coin5, TRANS.scale.coin);
    sfSprite_setScale(GAME.sprite.coin6, TRANS.scale.coin);
}

static void set_position(mario *mario)
{
    TRANS.position.mg.x = 0;
    TRANS.position.mg.y = -500;
    TRANS.position.mg2.x = 7920;
    TRANS.position.mg2.y = 60;
    TRANS.position.back.y = 0;
    TRANS.position.back.x = 0;
    TRANS.position.ground.y = -500;
    TRANS.position.ground.x = 0;
    TRANS.position.mario.y = 710;
    TRANS.position.mario.x = 150;
    TRANS.position.quest.x = 920;
    TRANS.position.quest.y = 620;
    TRANS.position.quest2.x = 960;
    TRANS.position.quest2.y = 620;
    TRANS.position.coin.x = 1535;
    TRANS.position.coin.y = 760;
    TRANS.position.coin2.x = 1570;
    TRANS.position.coin2.y = 760;
    TRANS.position.coin3.x = 1570;
    TRANS.position.coin3.y = 727;
    TRANS.position.coin4.x = 1570;
    TRANS.position.coin4.y = 692;
    TRANS.position.coin5.x = 1610;
    TRANS.position.coin5.y = 692;
    TRANS.position.coin6.x = 1650;
    TRANS.position.coin6.y = 692;
    sfSprite_setPosition(GAME.sprite.mg, TRANS.position.mg);
    sfSprite_setPosition(GAME.sprite.mg2, TRANS.position.mg2);
    sfSprite_setPosition(GAME.sprite.back, TRANS.position.back);
    sfSprite_setPosition(GAME.sprite.ground, TRANS.position.ground);
    sfSprite_setPosition(GAME.sprite.mario, TRANS.position.mario);
    sfSprite_setPosition(GAME.sprite.quest, TRANS.position.quest);
    sfSprite_setPosition(GAME.sprite.quest2, TRANS.position.quest2);
    sfSprite_setPosition(GAME.sprite.coin, TRANS.position.coin);
    sfSprite_setPosition(GAME.sprite.coin2, TRANS.position.coin2);
    sfSprite_setPosition(GAME.sprite.coin3, TRANS.position.coin3);
    sfSprite_setPosition(GAME.sprite.coin4, TRANS.position.coin4);
    sfSprite_setPosition(GAME.sprite.coin5, TRANS.position.coin5);
    sfSprite_setPosition(GAME.sprite.coin6, TRANS.position.coin6);
}

void game_init_transform(mario *mario)
{
    set_scale(mario);
    set_position(mario);
}