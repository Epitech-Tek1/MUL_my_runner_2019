/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

////////////////////////////////////////////////////////////
/// \brief 2-component SFML window variables
///
////////////////////////////////////////////////////////////
typedef struct
{
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    sfColor color;
} window;


////////////////////////////////////////////////////////////
/// \brief Struct contains all menu sprite
///
////////////////////////////////////////////////////////////
typedef struct
{
    sfSprite *intro;
    sfSprite *menu;
    sfSprite *pipe_game, *pipe_new, *pipe_gen, *pipe_op;
    sfSprite *game;
    sfSprite *new;
    sfSprite *gen;
    sfSprite *op;
    sfSprite *mg, *mg2;
    sfSprite *back, *back2;
    sfSprite *ground, *ground2;
    sfSprite *mario;
    sfSprite *quest, *quest2;
    sfSprite *coin, *coin2, *coin3, *coin4, *coin5, *coin6;
    sfSprite *goomba;
} sprite;


////////////////////////////////////////////////////////////
/// \brief Struct contains all menu texture
///
////////////////////////////////////////////////////////////
typedef struct
{
    sfTexture *intro, *intro2, *intro3;
    sfTexture *menu;
    sfTexture *pipe_game, *pipe_new, *pipe_gen, *pipe_op;
    sfTexture *game;
    sfTexture *new;
    sfTexture *gen;
    sfTexture *op;
    sfTexture *mg, *mg2;
    sfTexture *back;
    sfTexture *ground;
    sfTexture *mario;
    sfTexture *quest;
    sfTexture *coin;
    sfTexture *goomba;
    sfIntRect rect;
} texture;

typedef struct
{
    sfIntRect quest;
} rect;

typedef struct
{
    sfVector2f player_pos;
    _Bool health;
} player;


typedef struct
{
    sfClock *clock;
    sfTime time;
    double seconds;
} _game_time;


typedef struct
{
    sfTime time;
    double seconds;
    sfClock *clock;
    _game_time _game_time;
} evt;


typedef struct
{
    sfClock *quest; sfTime quest_time; double quest_seconds;
    sfClock *coin; sfTime coin_time; double coin_seconds;
    sfClock *goomba; sfTime goomba_time; double goomba_seconds;
    sfClock *colision; sfTime colision_time; double colision_seconds;
} _clock;


////////////////////////////////////////////////////////////
/// \brief Struct contains all menu's elements
///
/// \e Sprite
/// \e Texture
////////////////////////////////////////////////////////////
typedef struct
{
    sprite sprite;
    texture texture;
    evt evt;
} _menu;


////////////////////////////////////////////////////////////
/// \brief Struct contains all intro's elements
///
/// \e Sprite
/// \e Texture
////////////////////////////////////////////////////////////
typedef struct
{
    sprite sprite;
    texture texture;
    evt evt;
} _intro;


////////////////////////////////////////////////////////////
/// \brief Struct contains all intro's elements
///
/// \e Sprite
/// \e Texture
////////////////////////////////////////////////////////////
typedef struct
{
    sprite sprite;
    texture texture;
    evt evt;
    _clock _clock;
    sfText *score;
    sfFont *font;
} _game;


typedef struct
{
    window window;
    _menu _menu;
    transform transform;
    _intro _intro;
    _game _game;
    player player;
    sfClock *game_time;
    sfClock *clock;
    sfTime time;
    double seconds;
    char **map;
    int scene;
    int const_event;
    int score;
    _Bool jump;
} mario;


#endif /* !STRUCT_H_ */