/*
** EPITECH PROJECT, 2019
** tower_shoot_devil.c
** File description:
** tower_shoot_devil.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void canon_tower_shoot_devil(all_t *all, sfRenderWindow *window)
{
    sfVector2f pos;

    for (int i = 1; i < all->twr->nbr_canon_twr; i++) {
        pos = sfSprite_getPosition(all->enm->sprite_d[1]);
        if (pos.x > all->twr->v_canon_tower[i].x - 150 &&
            pos.x < all->twr->v_canon_tower[i].x + 150 &&
            pos.y > all->twr->v_canon_tower[i].y - 150 &&
            pos.y < all->twr->v_canon_tower[i].y + 200) {
            if (all->enm->seconds[16] > 2) {
                all->enm->life[2] = all->enm->life[2] - 1;
                sfMusic_play(all->msc->game[4]);
                sfClock_restart(all->enm->clock[16]);
            }
        }
    }
    fire_tower_shoot_devil(all, window);
}

void fire_tower_shoot_devil(all_t *all, sfRenderWindow *window)
{
    sfVector2f pos;

    for (int i = 1; i < all->twr->nbr_fire_twr; i++) {
        pos = sfSprite_getPosition(all->enm->sprite_d[1]);
        if (pos.x > all->twr->v_fire_tower[i].x - 150 &&
            pos.x < all->twr->v_fire_tower[i].x + 150 &&
            pos.y > all->twr->v_fire_tower[i].y - 150 &&
            pos.y < all->twr->v_fire_tower[i].y + 200) {
            if (all->enm->seconds[16] > 2) {
                all->enm->life[2] = all->enm->life[2] - 2;
                sfMusic_play(all->msc->game[5]);
                sfClock_restart(all->enm->clock[16]);
            }
        }
    }
    ice_tower_shoot_devil(all, window);
}

void ice_tower_shoot_devil(all_t *all, sfRenderWindow *window)
{
    sfVector2f pos;

    for (int i = 1; i < all->twr->nbr_ice_twr; i++) {
        pos = sfSprite_getPosition(all->enm->sprite_d[1]);
        if (pos.x > all->twr->v_ice_tower[i].x - 150 &&
            pos.x < all->twr->v_ice_tower[i].x + 150 &&
            pos.y > all->twr->v_ice_tower[i].y - 150 &&
            pos.y < all->twr->v_ice_tower[i].y + 200) {
            if (all->enm->seconds[16] > 2) {
                all->enm->life[2] = all->enm->life[2] - 3;
                sfMusic_play(all->msc->game[6]);
                sfClock_restart(all->enm->clock[16]);
            }
        }
    }
    thunder_tower_shoot_devil(all, window);
}

void thunder_tower_shoot_devil(all_t *all, sfRenderWindow *window)
{
    sfVector2f pos;

    for (int i = 1; i < all->twr->nbr_thunder_twr; i++) {
        pos = sfSprite_getPosition(all->enm->sprite_d[1]);
        if (pos.x > all->twr->v_thunder_tower[i].x - 150 &&
            pos.x < all->twr->v_thunder_tower[i].x + 150 &&
            pos.y > all->twr->v_thunder_tower[i].y - 150 &&
            pos.y < all->twr->v_thunder_tower[i].y + 200) {
            if (all->enm->seconds[16] > 2) {
                all->enm->life[2] = all->enm->life[2] - 4;
                sfMusic_play(all->msc->game[7]);
                sfClock_restart(all->enm->clock[16]);
            }
        }
    }
    canon_tower_shoot_knight(all, window);
}
