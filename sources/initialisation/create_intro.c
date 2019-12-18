/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** create_intro
*/

/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** sprite_create
*/

#include "runner.h"

static void intro_assembly(mario *mario)
{
    sfSprite_setTexture(INTRO.sprite.intro, INTRO.texture.intro, sfFalse);
}

static void intro_texture_create(mario *mario)
{
    INTRO.texture.intro = sfTexture_createFromFile(INTRO_VID, NULL);
    intro_assembly(mario);
}

static void intro_sprite_create(mario *mario)
{
    INTRO.sprite.intro = sfSprite_create();
    intro_texture_create(mario);
}

void intro_create(mario *mario)
{
    intro_sprite_create(mario);
}