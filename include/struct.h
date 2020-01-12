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
    sfSprite *pipe_game, *pipe_new, *pipe_gen, *pipe_op, *pipe;
    sfSprite *game;
    sfSprite *new;
    sfSprite *gen;
    sfSprite *op;
    sfSprite *mg, *mg2;
    sfSprite *back, *back2;
    sfSprite *ground, *ground2;
    sfSprite *mario;
    sfSprite *quest, *quest2;
    sfSprite *flag;
    sfSprite *goomba, *goomba2, *goomba3, *goomba4;
    sfSprite *end;
    sfSprite *bowser;
    sfSprite *winscreen;
    sfSprite *champ;
    sfSprite *coin, *coin2, *coin3, *coin4, *coin5, *coin6, *coin7, *coin8,
    *coin9, *coin10, *coin11, *coin12, *coin13, *coin14, *coin15, *coin16,
    *coin17, *coin18, *coin19, *coin20, *coin21, *coin22, *coin23;
} sprite;


////////////////////////////////////////////////////////////
/// \brief Struct contains all menu texture
///
////////////////////////////////////////////////////////////
typedef struct
{
    sfTexture *intro, *intro2, *intro3;
    sfTexture *menu;
    sfTexture *pipe_game, *pipe_new, *pipe_gen, *pipe_op, *pipe;
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
    sfTexture *flag;
    sfTexture *end;
    sfTexture *bowser;
    sfTexture *winScreen;
    sfTexture *champ;
    sfTexture *brocken;
    sfIntRect rect;
} texture;

typedef struct
{
    sfMusic *lvl;
    sfMusic *jump;
    sfMusic *death;
    sfMusic *win;
    sfMusic *loose;
    sfMusic *menu;
    sfMusic *hit;
    sfMusic *coin, *coin1, *coin2, *coin3, *coin4, *coin5, *coin7, *coin8,
    *coin9, *coin10, *coin11, *coin12, *coin13, *coin14, *coin15, *coin16;
    _Bool playe_loose;
} sounds;


typedef struct
{
    int speed_player;
} speed;

typedef struct
{
    sfIntRect quest;
} rect;

typedef struct
{
    speed speed;
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
    sfClock *hit_clock; sfTime hit_time; double hit_seconds;
    sfClock *end_clock; sfTime end_time; double end_seconds;
    sfClock *quest; sfTime quest_time; double quest_seconds;
    sfClock *coin; sfTime coin_time; double coin_seconds;
    sfClock *goomba; sfTime goomba_time; double goomba_seconds;
    sfClock *colisiong; sfTime colisiong_time; double colisiong_seconds;
    sfClock *loose; sfTime loose_time; double loose_seconds;
    sfClock *champ; sfTime champ_time; double champ_seconds;
} _clock;

typedef struct
{
    sfRectangleShape *mountain;
    sfRectangleShape *mountain2;
    sfRectangleShape *mountain3;
    sfRectangleShape *mountain4;
    sfRectangleShape *mountain5;
    sfRectangleShape *mountain6;
    sfRectangleShape *mountstop;
    sfRectangleShape *ground;
    sfRectangleShape *pipe_top;
    sfRectangleShape *pipe_left;
} _colision;


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
    _Bool catch;
    _Bool try;
    _Bool screen_win;
    _colision _colision;
    _clock _clock;
    sfText *score;
    sfFont *font;
    sounds  sounds;
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
    int jump;
    int is_move;
    _Bool is_end;
    _Bool is_loose;
    _Bool is_up;
    _Bool stop_up;
    _Bool appear;
} mario;


#endif /* !STRUCT_H_ */