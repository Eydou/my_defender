/*
** EPITECH PROJECT, 2019
** setup_rect_enm.c
** File description:
** setup_rect.c
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void move_rect_enm9(all_t *all, sfIntRect rect, int offset, int max)
{
    if (all->enm->seconds[12] > 0.15) {
        all->enm->rect[9].left = all->enm->rect[9].left + offset;
        if (all->enm->rect[9].left + offset >= max)
            all->enm->rect[9].left = 0;
        sfClock_restart(all->enm->clock[12]);
        sfSprite_setTextureRect(all->enm->sprite_k[1], all->enm->rect[9]);
    }
}

sfIntRect rect_enm9(all_t *all, int left, int width, int height)
{
        all->enm->rect[9].top = 130;
        all->enm->rect[9].left = left;
        all->enm->rect[9].width = width;
        all->enm->rect[9].height = height;
}

void move_rect_enm10(all_t *all, sfIntRect rect, int offset, int max)
{
    if (all->enm->seconds[13] > 0.15) {
        all->enm->rect[10].left = all->enm->rect[10].left + offset;
        if (all->enm->rect[10].left + offset >= max)
            all->enm->rect[10].left = 0;
        sfClock_restart(all->enm->clock[13]);
        sfSprite_setTextureRect(all->enm->sprite_k[1], all->enm->rect[10]);
    }
}

sfIntRect rect_enm10(all_t *all, int left, int width, int height)
{
        all->enm->rect[10].top = -10;
        all->enm->rect[10].left = left;
        all->enm->rect[10].width = width;
        all->enm->rect[10].height = height;
}

void move_rect_enm11(all_t *all, sfIntRect rect, int offset, int max)
{
    if (all->enm->seconds[14] > 0.15) {
        all->enm->rect[11].left = all->enm->rect[11].left + offset;
        if (all->enm->rect[11].left + offset >= max)
            all->enm->rect[11].left = 0;
        sfClock_restart(all->enm->clock[14]);
        sfSprite_setTextureRect(all->enm->sprite_k[1], all->enm->rect[11]);
    }
}
