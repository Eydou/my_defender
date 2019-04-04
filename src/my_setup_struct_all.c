/*
** EPITECH PROJECT, 2019
** my_setup_struct_all.c
** File description:
** next struct for all struct.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void my_setup_2_struct_enm(all_t *all, sfRenderWindow *window)
{
    all->game->pos[1] = vect_create_enm(30, 27);
    all->game->pos[2] = vect_create_enm(22, 157);
    all->game->pos[3] = vect_create_enm(45, 157);
    all->game->pos[4] = vect_create_enm(990, 157);
    all->game->pos[5] = vect_create_enm(1010, 157);
    rect_enm(all, 0, 60, 65);
    rect_enm2(all, 0, 60, 65);
    rect_enm3(all, 0, 60, 65);
    rect_enm4(all, 0, 60, 65);
    rect_enm5(all, 0, 55, 65);
    rect_enm6(all, 0, 55, 65);
    rect_enm7(all, 0, 55, 65);
    rect_enm8(all, 0, 55, 65);
    rect_enm9(all, 0, 60, 65);
    rect_enm10(all, 0, 60, 65);
    rect_enm11(all, 0, 60, 65);
    rect_enm12(all, 0, 60, 65);
    all->enm->life[1] = 2;
    all->enm->life[2] = 3;
    all->enm->life[3] = 5;
}

void my_setup_struct_game(all_t *all, sfRenderWindow *window)
{
    all->game->clock = malloc(sizeof(sfClock *) * 6);
    all->game->clock[1] = sfClock_create();
    all->game->clock[2] = sfClock_create();
    all->game->clock[3] = sfClock_create();
    all->game->txture[12] = sfTexture_createFromFile
        ("pictures/menu/intro.png", NULL);
    all->game->txture[13] = sfTexture_createFromFile
        ("pictures/menu/emblem.png", NULL);
    all->game->txture[14] = sfTexture_createFromFile
        ("pictures/menu/game_o.png", NULL);
    sfText_setCharacterSize(all->game->txt[3], 25);
    sfText_setCharacterSize(all->game->txt[2], 25);
    sfText_setCharacterSize(all->game->txt[6], 25);
    my_setup_struct_game3(all, window);
    rect_intro(all, 0, 1080, 1085);
    for (int i = 1; i != 6; i++)
        sfText_setPosition(all->game->txt[i], all->game->pos[i]);
}

void my_setup_struct_enm(all_t *all, sfRenderWindow *window)
{
    my_setup_2_struct_enm(all, window);
    all->enm->size.x = 1.2;
    all->enm->size.y = 1.2;
    all->enm->pos[1] = vect_create_enm(0, 285);
    all->enm->pos[2] = vect_create_enm(0, 285);
    all->enm->pos[3] = vect_create_enm(0, 285);
    sfSprite_setPosition(all->enm->sprite[1], all->enm->pos[1]);
    sfSprite_setPosition(all->enm->sprite_d[1], all->enm->pos[2]);
    sfSprite_setPosition(all->enm->sprite_k[1], all->enm->pos[3]);
    for (int i = 1; i != 4; i++) {
        all->enm->x[i] = 0;
        all->enm->y[i] = 285;
        all->enm->a[i] = 0;
        all->enm->b[i] = 0;
        all->enm->c[i] = 0;
    }
    for (int j = 1; j != 6; j++)
        sfSprite_setTextureRect(all->enm->sprite[j], all->enm->rect[j]);
    sfSprite_setScale(all->enm->sprite_k[1], all->enm->size);
    all->enm->nb_enm = 3;
}

void my_struct_castle(all_t *all, sfRenderWindow *window)
{
    all->cstl->sprite = malloc(sizeof(sfSprite *) * 5);
    all->cstl->txture = malloc(sizeof(sfTexture *) * 5);
    all->cstl->pos = malloc(sizeof(sfVector2f) * 5);

    all->cstl->life = 1;
    for (int i = 1; i != 4; i++)
        all->cstl->sprite[i] = sfSprite_create();
    all->cstl->txture[1] = sfTexture_createFromFile
        ("pictures/map/g_bar.png", NULL);
    all->cstl->txture[2] = sfTexture_createFromFile
        ("pictures/map/y_bar.png", NULL);
    all->cstl->txture[3] = sfTexture_createFromFile
        ("pictures/map/r_bar.png", NULL);
    for (int i = 1; i != 4; i++) {
    all->cstl->pos[i] = vect_create_enm(1020, 450);
    sfSprite_setTexture(all->cstl->sprite[i], all->cstl->txture[i], sfTrue);
    sfSprite_setPosition(all->cstl->sprite[i], all->cstl->pos[i]);
    }
}

void my_struct_enm(all_t *all, sfRenderWindow *window)
{
    my_malloc_enm(all);
    for (int i = 1; i != 20; i++) {
        all->enm->sprite[i] = sfSprite_create();
        all->enm->sprite_d[i] = sfSprite_create();
        all->enm->sprite_k[i] = sfSprite_create();
    }
    all->enm->txture[1] = sfTexture_createFromFile
        ("pictures/enemies/assasin.png", NULL);
    all->enm->txture[2] = sfTexture_createFromFile
        ("pictures/enemies/devil.png", NULL);
    all->enm->txture[3] = sfTexture_createFromFile
        ("pictures/enemies/knight.png", NULL);
    for (int j = 1; j != 5; j++) {
        sfSprite_setTexture(all->enm->sprite[j], all->enm->txture[1], sfTrue);
        sfSprite_setTexture(all->enm->sprite_d[j], all->enm->txture[2], sfTrue);
        sfSprite_setTexture(all->enm->sprite_k[j], all->enm->txture[3], sfTrue);
    }
    for (int i = 1; i != 19; i++)
        all->enm->clock[i] = sfClock_create();
    my_setup_struct_enm(all, window);
}
