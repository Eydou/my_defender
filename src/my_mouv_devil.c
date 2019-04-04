/*
** EPITECH PROJECT, 2019
** my_mouv_devil.
** File description:
** my_mouv.
*/

#include "../include/my_src.h"
#include "../include/my_struct.h"

void move_sprite_devil(all_t *all, int x, int y)
{
    sfVector2f pos_enm = vect_create_enm(x, y);
    sfSprite_setPosition(all->enm->sprite_d[1], pos_enm);
}

void my_setup_move_devil(all_t *all)
{
    if (all->enm->b[1] > 590 && all->enm->b[1] < 710) {
        all->enm->y[2] = all->enm->y[2] - 1;
        all->enm->x[2] = 458;
    }   if (all->enm->b[1] > 890 && all->enm->b[1] < 1165) {
        all->enm->y[2] = all->enm->y[2] + 1;
        all->enm->x[2] = 650;
    }
    if (all->enm->b[1] > 1335 && all->enm->b[1] < 1630) {
        all->enm->y[2] = all->enm->y[2] + 1;
        all->enm->x[2] = 475;
    }
    if (all->enm->b[1] > 1800 && all->enm->b[1] < 1930) {
        all->enm->y[2] = all->enm->y[2] - 1;
        all->enm->x[2] = 650;
    }
    if (all->enm->b[1] > 2100 && all->enm->b[1] < 2230) {
        all->enm->y[2] = all->enm->y[2] + 1;
        all->enm->x[2] = 830;
    }
}

int my_move_devil(all_t *all)
{
    if (all->enm->seconds[6] > 0.0114) {
        if (all->enm->b[1] > 1165 && all->enm->b[1] < 1335)
            all->enm->x[2] = all->enm->x[2] - 1;
        else
            all->enm->x[2] = all->enm->x[2] + 1;
        all->enm->b[1] = all->enm->b[1] + 1;
        sfClock_restart(all->enm->clock[6]);
        if (all->enm->b[1] > 290 && all->enm->b[1] < 415) {
            all->enm->y[2] = all->enm->y[2] + 1;
            all->enm->x[2] = 290;
        }
        my_setup_move_devil(all);
    }
}
