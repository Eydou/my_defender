/*
** EPITECH PROJECT, 2019
** my_fame_over.c
** File description:
** my_game_over.
*/

#include "../include/my_src.h"
#include "../include/my_struct.h"

void move_rect_over(all_t *all, sfIntRect rect, int offset, int max)
{
    if (all->game->seconds[3] > 0.15) {
        all->game->rect_o.left = all->game->rect_o.left + offset;
        if (all->game->rect_o.left + offset >= max)
            all->game->rect_o.left = 0;
        sfClock_restart(all->game->clock[3]);
        sfSprite_setTextureRect(all->game->sprite[11], all->game->rect_o);
    }
}

sfIntRect rect_over(all_t *all, int left, int width, int height)
{
    all->game->rect_o.top = 0;
    all->game->rect_o.left = left;
    all->game->rect_o.width = width;
    all->game->rect_o.height = height;
}

void my_over(all_t *all, sfRenderWindow *window)
{
    move_rect_over(all, all->game->rect_o, 1080, 9712);
}
