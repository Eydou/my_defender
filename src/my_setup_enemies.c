/*
** EPITECH PROJECT, 2019
** my_setup_ennemies.c
** File description:
** my_setup_enemies.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void setup_my_knight(all_t *all, sfRenderWindow *window)
{
    if (all->enm->c[1] > 590 && all->enm->c[1] < 710 ||
        all->enm->c[1] > 1800 && all->enm->c[1] < 1930) {
        move_rect_enm11(all, all->enm->rect[11], 65, 240);
        move_sprite_knight(all, all->enm->x[3] - 50, all->enm->y[3]);
    }
    if (all->enm->c[1] > 1165 && all->enm->c[1] < 1335) {
        move_rect_enm12(all, all->enm->rect[12], 65, 240);
        move_sprite_knight(all, all->enm->x[3] - 50, all->enm->y[3]);
    }
}

void my_knight(all_t *all, sfRenderWindow *window)
{
    if (all->enm->x[3] < 290 ||  all->enm->c[1] > 415
        && all->enm->c[1] < 590 || all->enm->c[1] > 2230 ||
        all->enm->c[1] > 710 && all->enm->c[1] < 890 ||
        all->enm->c[1] > 1630 && all->enm->c[1] < 1800 ||
        all->enm->c[1] > 1930 && all->enm->c[1] < 2100) {
        move_rect_enm9(all, all->enm->rect[9], 65, 240);
        move_sprite_knight(all, all->enm->x[3] - 50, all->enm->y[3]);
    }
    if (all->enm->c[1] > 290 && all->enm->c[1] < 415 ||
        all->enm->c[1] > 890 && all->enm->c[1] < 1165 ||
        all->enm->c[1] > 1335 && all->enm->c[1] < 1635 ||
        all->enm->c[1] > 2100 && all->enm->c[1] < 2230) {
        move_rect_enm10(all, all->enm->rect[10], 65, 240);
        move_sprite_knight(all, all->enm->x[3] - 50, all->enm->y[3]);
    }
    setup_my_knight(all, window);

}

void setup_my_devil(all_t *all, sfRenderWindow *window)
{
    if (all->enm->b[1] > 590 && all->enm->b[1] < 710 ||
        all->enm->b[1] > 1800 && all->enm->b[1] < 1930) {
        move_rect_enm7(all, all->enm->rect[7], 55, 240);
        move_sprite_devil(all, all->enm->x[2] - 50, all->enm->y[2]);
    }
    if (all->enm->b[1] > 1165 && all->enm->b[1] < 1335) {
        move_rect_enm8(all, all->enm->rect[8], 55, 240);
        move_sprite_devil(all, all->enm->x[2] - 50, all->enm->y[2]);
    }
}

void my_devil(all_t *all, sfRenderWindow *window)
{
    if (all->enm->x[2] < 290 || all->enm->b[1] > 415
        && all->enm->b[1] < 590 || all->enm->b[1] > 2230 ||
        all->enm->b[1] > 710 && all->enm->b[1] < 890 ||
        all->enm->b[1] > 1630 && all->enm->b[1] < 1800 ||
        all->enm->b[1] > 1930 && all->enm->b[1] < 2100) {
        move_rect_enm5(all, all->enm->rect[5], 55, 240);
        move_sprite_devil(all, all->enm->x[2] - 50, all->enm->y[2]);
    }
    if (all->enm->b[1] > 290 && all->enm->b[1] < 415 ||
        all->enm->b[1] > 890 && all->enm->b[1] < 1165 ||
        all->enm->b[1] > 1335 && all->enm->b[1] < 1635 ||
        all->enm->b[1] > 2100 && all->enm->b[1] < 2230) {
        move_rect_enm6(all, all->enm->rect[6], 55, 240);
        move_sprite_devil(all, all->enm->x[2] - 50, all->enm->y[2]);
    }
    setup_my_devil(all, window);
}
