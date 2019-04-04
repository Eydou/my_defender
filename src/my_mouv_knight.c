/*
** EPITECH PROJECT, 2019
** my_mouv_devil.
** File description:
** my_mouv.
*/

#include "../include/my_src.h"
#include "../include/my_struct.h"

void move_sprite_knight(all_t *all, int x, int y)
{
    sfVector2f pos_enm = vect_create_enm(x, y);
    sfSprite_setPosition(all->enm->sprite_k[1], pos_enm);
}

void my_setup_move_knight(all_t *all)
{
    if (all->enm->c[1] > 590 && all->enm->c[1] < 710) {
        all->enm->y[3] = all->enm->y[3] - 1;
        all->enm->x[3] = 458;
    }   if (all->enm->c[1] > 890 && all->enm->c[1] < 1165) {
        all->enm->y[3] = all->enm->y[3] + 1;
        all->enm->x[3] = 650;
    }
    if (all->enm->c[1] > 1335 && all->enm->c[1] < 1630) {
        all->enm->y[3] = all->enm->y[3] + 1;
        all->enm->x[3] = 475;
    }
    if (all->enm->c[1] > 1800 && all->enm->c[1] < 1930) {
        all->enm->y[3] = all->enm->y[3] - 1;
        all->enm->x[3] = 650;
    }
    if (all->enm->c[1] > 2100 && all->enm->c[1] < 2230) {
        all->enm->y[3] = all->enm->y[3] + 1;
        all->enm->x[3] = 830;
    }
}

int my_move_knight(all_t *all)
{
    if (all->enm->seconds[11] > 0.015) {
        if (all->enm->c[1] > 1165 && all->enm->c[1] < 1335)
            all->enm->x[3] = all->enm->x[3] - 1;
        else
            all->enm->x[3] = all->enm->x[3] + 1;
        all->enm->c[1] = all->enm->c[1] + 1;
        sfClock_restart(all->enm->clock[11]);
        if (all->enm->c[1] > 290 && all->enm->c[1] < 415) {
            all->enm->y[3] = all->enm->y[3] + 1;
            all->enm->x[3] = 290;
        }
        my_setup_move_knight(all);
    }
}
