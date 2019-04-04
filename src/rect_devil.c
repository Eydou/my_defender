/*
** EPITECH PROJECT, 2019
** rect_devil.c
** File description:
** devil.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

sfIntRect rect_enm6(all_t *all, int left, int width, int height)
{
        all->enm->rect[6].top = -10;
        all->enm->rect[6].left = left;
        all->enm->rect[6].width = width;
        all->enm->rect[6].height = height;
}

void move_rect_enm7(all_t *all, sfIntRect rect, int offset, int max)
{
    if (all->enm->seconds[9] > 0.15) {
        all->enm->rect[7].left = all->enm->rect[7].left + offset;
        if (all->enm->rect[7].left + offset >= max)
            all->enm->rect[7].left = 0;
        sfClock_restart(all->enm->clock[9]);
        sfSprite_setTextureRect(all->enm->sprite_d[1], all->enm->rect[7]);
    }
}

sfIntRect rect_enm7(all_t *all, int left, int width, int height)
{
        all->enm->rect[7].top = 195;
        all->enm->rect[7].left = left;
        all->enm->rect[7].width = width;
        all->enm->rect[7].height = height;
}

void move_rect_enm8(all_t *all, sfIntRect rect, int offset, int max)
{
    if (all->enm->seconds[10] > 0.15) {
        all->enm->rect[8].left = all->enm->rect[8].left + offset;
        if (all->enm->rect[8].left + offset >= max)
            all->enm->rect[8].left = 0;
        sfClock_restart(all->enm->clock[10]);
        sfSprite_setTextureRect(all->enm->sprite_d[1], all->enm->rect[8]);
    }
}

sfIntRect rect_enm8(all_t *all, int left, int width, int height)
{
        all->enm->rect[8].top = 65;
        all->enm->rect[8].left = left;
        all->enm->rect[8].width = width;
        all->enm->rect[8].height = height;
}
