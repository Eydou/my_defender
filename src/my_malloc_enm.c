/*
** EPITECH PROJECT, 2019
** malloc_enm.
** File description:
** enm.
*/

#include "../include/my_src.h"
#include "../include/my_struct.h"

void my_malloc_enm(all_t *all)
{
    all->enm->x = malloc(sizeof(int) * 5);
    all->enm->y = malloc(sizeof(int) * 5);
    all->enm->a = malloc(sizeof(int) * 12);
    all->enm->b = malloc(sizeof(int) * 12);
    all->enm->c = malloc(sizeof(int) * 12);
    all->enm->life = malloc(sizeof(int) * 12);
    all->enm->rect = malloc(sizeof(sfIntRect) * 14);
    all->enm->clock = malloc(sizeof(sfClock *) * 20);
    all->enm->sprite = malloc(sizeof(sfSprite *) * 21);
    all->enm->sprite_d = malloc(sizeof(sfSprite *) * 21);
    all->enm->sprite_k = malloc(sizeof(sfSprite *) * 21);
    all->enm->txture = malloc(sizeof(sfTexture *) * 20);
    all->enm->pos = malloc(sizeof(sfVector2f) * 20);
}

void my_malloc_time(all_t *all)
{
    all->enm->time = malloc(sizeof(sfTime) * 20);
    all->enm->seconds = malloc(sizeof(float) * 20);
    for (int i = 1; i != 19; i++) {
        all->enm->time[i] = sfClock_getElapsedTime(all->enm->clock[i]);
        all->enm->seconds[i] = all->enm->time[i].microseconds / 1000000.0;
    }
}
