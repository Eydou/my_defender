/*
** EPITECH PROJECT, 2019
** rect_enm.c
** File description:
** rect_enm.c
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void move_rect_enm3(all_t *all, sfIntRect rect, int offset, int max)
{
    if (all->enm->seconds[4] > 0.15) {
        all->enm->rect[3].left = all->enm->rect[3].left + offset;
        if (all->enm->rect[3].left + offset >= max)
            all->enm->rect[3].left = 0;
        sfClock_restart(all->enm->clock[4]);
        sfSprite_setTextureRect(all->enm->sprite[1], all->enm->rect[3]);
    }
}

sfIntRect rect_enm3(all_t *all, int left, int width, int height)
{
        all->enm->rect[3].top = 205;
        all->enm->rect[3].left = left;
        all->enm->rect[3].width = width;
        all->enm->rect[3].height = height;
}

void move_rect_enm2(all_t *all, sfIntRect rect, int offset, int max)
{
    if (all->enm->seconds[3] > 0.15) {
        all->enm->rect[2].left = all->enm->rect[2].left + offset;
        if (all->enm->rect[2].left + offset >= max)
            all->enm->rect[2].left = 0;
        sfClock_restart(all->enm->clock[3]);
        sfSprite_setTextureRect(all->enm->sprite[1], all->enm->rect[2]);
    }
}

sfIntRect rect_enm2(all_t *all, int left, int width, int height)
{
        all->enm->rect[2].top = 0;
        all->enm->rect[2].left = left;
        all->enm->rect[2].width = width;
        all->enm->rect[2].height = height;
}

void setup_my_assasin(all_t *all, sfRenderWindow *window)
{
    if (all->enm->a[1] > 590 && all->enm->a[1] < 710 ||
        all->enm->a[1] > 1800 && all->enm->a[1] < 1930) {
        move_rect_enm3(all, all->enm->rect[3], 60, 240);
        move_sprite_enm(all, all->enm->x[1] - 50, all->enm->y[1]);
    }
    if (all->enm->a[1] > 1165 && all->enm->a[1] < 1335) {
        move_rect_enm4(all, all->enm->rect[4], 60, 240);
        move_sprite_enm(all, all->enm->x[1] - 50, all->enm->y[1]);
    }
}
