/*
** EPITECH PROJECT, 2019
** setup_rect_enm.c
** File description:
** setup_rect.c
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

sfIntRect rect_enm11(all_t *all, int left, int width, int height)
{
        all->enm->rect[11].top = 205;
        all->enm->rect[11].left = left;
        all->enm->rect[11].width = width;
        all->enm->rect[11].height = height;
}

void move_rect_enm12(all_t *all, sfIntRect rect, int offset, int max)
{
    if (all->enm->seconds[15] > 0.15) {
        all->enm->rect[12].left = all->enm->rect[12].left + offset;
        if (all->enm->rect[12].left + offset >= max)
            all->enm->rect[12].left = 0;
        sfClock_restart(all->enm->clock[15]);
        sfSprite_setTextureRect(all->enm->sprite_k[1], all->enm->rect[12]);
    }
}

sfIntRect rect_enm12(all_t *all, int left, int width, int height)
{
        all->enm->rect[12].top = 70;
        all->enm->rect[12].left = left;
        all->enm->rect[12].width = width;
        all->enm->rect[12].height = height;
}
