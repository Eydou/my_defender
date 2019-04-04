/*
** EPITECH PROJECT, 2019
** setup_rect_enm.c
** File description:
** setup_rect.c
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void move_rect_enm4(all_t *all, sfIntRect rect, int offset, int max)
{
    if (all->enm->seconds[5] > 0.15) {
        all->enm->rect[4].left = all->enm->rect[4].left + offset;
        if (all->enm->rect[4].left + offset >= max)
            all->enm->rect[4].left = 0;
        sfClock_restart(all->enm->clock[5]);
        sfSprite_setTextureRect(all->enm->sprite[1], all->enm->rect[4]);
    }
}

sfIntRect rect_enm4(all_t *all, int left, int width, int height)
{
        all->enm->rect[4].top = 70;
        all->enm->rect[4].left = left;
        all->enm->rect[4].width = width;
        all->enm->rect[4].height = height;
}

void move_rect_enm5(all_t *all, sfIntRect rect, int offset, int max)
{
    if (all->enm->seconds[7] > 0.15) {
        all->enm->rect[5].left = all->enm->rect[5].left + offset;
        if (all->enm->rect[5].left + offset >= max)
            all->enm->rect[5].left = 0;
        sfClock_restart(all->enm->clock[7]);
        sfSprite_setTextureRect(all->enm->sprite_d[1], all->enm->rect[5]);
    }
}

sfIntRect rect_enm5(all_t *all, int left, int width, int height)
{
        all->enm->rect[5].top = 130;
        all->enm->rect[5].left = left;
        all->enm->rect[5].width = width;
        all->enm->rect[5].height = height;
}

void move_rect_enm6(all_t *all, sfIntRect rect, int offset, int max)
{
    if (all->enm->seconds[8] > 0.15) {
        all->enm->rect[6].left = all->enm->rect[6].left + offset;
        if (all->enm->rect[6].left + offset >= max)
            all->enm->rect[6].left = 0;
        sfClock_restart(all->enm->clock[8]);
        sfSprite_setTextureRect(all->enm->sprite_d[1], all->enm->rect[6]);
    }
}
