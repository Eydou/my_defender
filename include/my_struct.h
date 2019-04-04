/*
** EPITECH PROJECT, 2019
** my_struct.h
** File description:
** all struct for the game.
*/

#ifndef my_struct_h
#define my_struct_h

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/System/Vector2.h>
#include <SFML/Audio.h>
#include <SFML/Audio/Sound.h>
#include <SFML/System.h>
#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics.h>

   /* struct */

typedef struct game {
    int score;
    int coin;
    int wave;
    int song_on_off;
    int big_song_on_off;
    int big_resume_btn;
    int lvl;
    sfVector2f *pos;
    sfTexture **txture;
    sfSprite **sprite;
    sfText **txt;
    sfFont *font;
    sfVector2f v_bar;
    sfVector2f v_resume;
    sfVector2f v_quit;
    sfVector2f v_curseur;
    sfVector2f v_castle;
    sfVector2f v_song;
    sfClock **clock;
    sfTime *time;
    float *seconds;
    sfIntRect rect;
    sfIntRect rect_o;
} game_t;

typedef struct music {
    sfMusic **game;
} music_t;

typedef struct menu {
    int gameloop;
    int big_btn;
    int big_htp;
    sfTexture **txture;
    sfSprite **sprite;
    sfVector2f v_htp;
    sfVector2f v_start;
    sfVector2f v_quit;
    sfVector2f v_return;
    sfVector2f v_return_big;
} menu_t;

typedef struct resume {
    sfTexture **rsme;
    sfSprite **sprite;
    sfIntRect *rect;
} resume_t;

typedef struct tower {
    int nbr_canon_twr;
    int nbr_fire_twr;
    int nbr_ice_twr;
    int nbr_thunder_twr;
    int tower_tree;
    sfTexture **txture;
    sfSprite **sprite;
    sfVector2f v_canon_tree;
    sfVector2f v_fire_tree;
    sfVector2f v_ice_tree;
    sfVector2f v_thunder_tree;
    sfVector2f *v_canon_tower;
    sfVector2f *v_fire_tower;
    sfVector2f *v_ice_tower;
    sfVector2f *v_thunder_tower;
    sfVector2f *v_square;
    sfVector2f v_range;
    sfVector2f v_canon_ball;
    sfVector2f v_fire_ball;
    sfVector2f v_ice_pick;
    sfVector2f v_thunder_ball;
} tower_t;

typedef struct enemies {
    int *x;
    int *y;
    int *a;
    int *b;
    int *c;
    int nb_enm;
    int *life;
    sfTexture **txture;
    sfSprite **sprite;
    sfSprite **sprite_d;
    sfSprite **sprite_k;
    sfSprite **sprite_cpy;
    sfVector2f *pos;
    sfVector2f size;
    sfIntRect *rect;
    sfClock **clock;
    sfTime *time;
    float *seconds;
} enemies_t;

typedef struct castle {
    int life;
    sfIntRect *rect;
    sfTexture **txture;
    sfSprite **sprite;
    sfVector2f *pos;
} castle_t;

typedef struct all {
    game_t *game;
    music_t *msc;
    menu_t *menu;
    resume_t *rsme;
    tower_t *twr;
    enemies_t *enm;
    castle_t *cstl;
} all_t;

#endif /* my_struct.h */
