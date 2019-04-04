/*
** EPITECH PROJECT, 2019
** my_intro.c
** File description:
** my_intro.
*/

#include "../include/my_src.h"
#include "../include/my_struct.h"

void move_rect_intro(all_t *all, sfIntRect rect, int offset, int max)
{
    if (all->game->seconds[1] > 0.15) {
        all->game->rect.left = all->game->rect.left + offset;
        if (all->game->rect.left + offset >= max)
            all->game->rect.left = 0;
        sfClock_restart(all->game->clock[1]);
        sfSprite_setTextureRect(all->game->sprite[12], all->game->rect);
    }
}

sfIntRect rect_intro(all_t *all, int left, int width, int height)
{
    all->game->rect.top = 0;
    all->game->rect.left = left;
    all->game->rect.width = width;
    all->game->rect.height = height;
}

void my_intro(all_t *all, sfRenderWindow *window)
{
    all->game->time = malloc(sizeof(sfTime) * 4);
    all->game->seconds = malloc(sizeof(float) * 4);
    for (int i = 1; i != 4; i++) {
        all->game->time[i] = sfClock_getElapsedTime(all->game->clock[i]);
        all->game->seconds[i] = all->game->time[i].microseconds / 1000000.0;
    }
    move_rect_intro(all, all->game->rect, 1080, 9340);
}
