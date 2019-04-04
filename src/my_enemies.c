/*
** EPITECH PROJECT, 2019
** my_enemies.c
** File description:
** anim_enemies.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void move_rect_enm(all_t *all, sfIntRect rect, int offset, int max)
{
    if (all->enm->seconds[1] > 0.15) {
        all->enm->rect[1].left = all->enm->rect[1].left + offset;
        if (all->enm->rect[1].left + offset >= max)
            all->enm->rect[1].left = 0;
        sfClock_restart(all->enm->clock[1]);
        sfSprite_setTextureRect(all->enm->sprite[1], all->enm->rect[1]);
    }
}

sfIntRect rect_enm(all_t *all, int left, int width, int height)
{
    all->enm->rect[1].top = 140;
    all->enm->rect[1].left = left;
    all->enm->rect[1].width = width;
    all->enm->rect[1].height = height;
}

sfVector2f vect_create_enm(int x, int y)
{
    sfVector2f vect;

    vect.x = x;
    vect.y = y;

    return (vect);
}

void my_assasin(all_t *all, sfRenderWindow *window)
{
    if (all->enm->x[1] < 290 || all->enm->a[1] > 415
        && all->enm->a[1] < 590 || all->enm->a[1] > 2230 ||
        all->enm->a[1] > 710 && all->enm->a[1] < 890
        || all->enm->a[1] > 1630 && all->enm->a[1] < 1800
        || all->enm->a[1] > 1930 && all->enm->a[1] < 2100) {
        move_rect_enm(all, all->enm->rect[1], 60, 240);
        move_sprite_enm(all, all->enm->x[1] - 50, all->enm->y[1]);
    }
    if (all->enm->a[1] > 290 && all->enm->a[1] < 415
    || all->enm->a[1] > 890 && all->enm->a[1] < 1165
    || all->enm->a[1] > 1335 && all->enm->a[1] < 1635
        || all->enm->a[1] > 2100 && all->enm->a[1] < 2230) {
        move_rect_enm2(all, all->enm->rect[2], 60, 240);
        move_sprite_enm(all, all->enm->x[1] - 50, all->enm->y[1]);
    }
    setup_my_assasin(all, window);
}

void my_enemies(all_t *all, sfRenderWindow *window)
{
    my_malloc_time(all);
    my_move_enm(all);
    my_assasin(all, window);
    my_move_devil(all);
    my_devil(all, window);
    my_move_knight(all);
    my_knight(all, window);
    my_handler_enm(all, window);
}
