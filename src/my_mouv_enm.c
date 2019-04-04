/*
** EPITECH PROJECT, 2019
** my_mouv_enm.
** File description:
** my_mouv.
*/

#include "../include/my_src.h"
#include "../include/my_struct.h"

void move_sprite_enm(all_t *all, int x, int y)
{
    sfVector2f pos_enm = vect_create_enm(x, y);
    sfSprite_setPosition(all->enm->sprite[1], pos_enm);
}

void my_setup_move_enm(all_t *all)
{
    if (all->enm->a[1] > 590 && all->enm->a[1] < 710) {
        all->enm->y[1] = all->enm->y[1] - 1;
        all->enm->x[1] = 458;
    }
    if (all->enm->a[1] > 890 && all->enm->a[1] < 1165) {
        all->enm->y[1] = all->enm->y[1] + 1;
        all->enm->x[1] = 650;
    }
    if (all->enm->a[1] > 1335 && all->enm->a[1] < 1630) {
        all->enm->y[1] = all->enm->y[1] + 1;
        all->enm->x[1] = 475;
    }
    if (all->enm->a[1] > 1800 && all->enm->a[1] < 1930) {
        all->enm->y[1] = all->enm->y[1] - 1;
        all->enm->x[1] = 650;
    }
    if (all->enm->a[1] > 2100 && all->enm->a[1] < 2230) {
        all->enm->y[1] = all->enm->y[1] + 1;
        all->enm->x[1] = 830;
    }
}

int my_move_enm(all_t *all)
{
    if (all->enm->seconds[2] > 0.01) {
        if (all->enm->a[1] > 1165 && all->enm->a[1] < 1335)
            all->enm->x[1] = all->enm->x[1] - 1;
        else
            all->enm->x[1] = all->enm->x[1] + 1;
        all->enm->a[1] = all->enm->a[1] + 1;
        sfClock_restart(all->enm->clock[2]);
        if (all->enm->a[1] > 290 && all->enm->a[1] < 415) {
            all->enm->y[1] = all->enm->y[1] + 1;
            all->enm->x[1] = 290;
        }
        my_setup_move_enm(all);
    }
}
