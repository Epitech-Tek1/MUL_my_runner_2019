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

static void intro_assembly(mario_t *mario)
{
    INTRO.texture.rect.height = 540;
    INTRO.texture.rect.left = 0;
    INTRO.texture.rect.top = 0;
    INTRO.texture.rect.width = 960;

    sfSprite_setTexture(INTRO.sprite.intro, INTRO.texture.intro, sfFalse);
    sfSprite_setTextureRect(INTRO.sprite.intro, INTRO.texture.rect);
}

static void intro_texture_create(mario_t *mario)
{
    INTRO.texture.intro = sfTexture_createFromFile(INTRO_VID, NULL);
    intro_assembly(mario);
}

static void intro_sprite_create(mario_t *mario)
{
    INTRO.sprite.intro = sfSprite_create();
    intro_texture_create(mario);
}

void intro_create(mario_t *mario)
{
    intro_sprite_create(mario);
    intro_do_transform(mario);
}