/*
** EPITECH PROJECT, 2019
** check_square.c
** File description:
** check_square.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void check_square_canon(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos)
{
    int a = 0;

    for (int i = 0; i <= 29; i++) {
        if (mouse_pos.x > all->twr->v_square[i].x + 65 &&
            mouse_pos.x < all->twr->v_square[i].x + 130 &&
            mouse_pos.y > all->twr->v_square[i].y + 60 &&
            mouse_pos.y < all->twr->v_square[i].y + 120) {
            all->twr->v_canon_tower[all->twr->nbr_canon_twr].x =
            all->twr->v_square[i].x - 5;
            all->twr->v_canon_tower[all->twr->nbr_canon_twr].y
            = all->twr->v_square[i].y - 75;
            sfSprite_setPosition(all->twr->sprite[5],
            all->twr->v_canon_tower[all->twr->nbr_canon_twr]);
            all->game->coin = all->game->coin - 10;
            if (all->game->coin < 0) {
                all->game->coin = all->game->coin + 10;
                a = 99;
            } else
            a = 100;
        }
    }
    if (a != 100) {
        all->twr->v_canon_tower[all->twr->nbr_canon_twr].x = 1030;
        all->twr->v_canon_tower[all->twr->nbr_canon_twr].x = 1080;
        sfSprite_setPosition(all->twr->sprite[5],
        all->twr->v_thunder_tower[all->twr->nbr_canon_twr]);
    }
}

void check_square_fire(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos)
{
    int a = 0;

    for (int i = 0; i <= 29; i++) {
        if (mouse_pos.x > all->twr->v_square[i].x + 65 &&
            mouse_pos.x < all->twr->v_square[i].x + 130 &&
            mouse_pos.y > all->twr->v_square[i].y + 60 &&
            mouse_pos.y < all->twr->v_square[i].y + 120) {
            all->twr->v_fire_tower[all->twr->nbr_fire_twr].x
            = all->twr->v_square[i].x - 5;
            all->twr->v_fire_tower[all->twr->nbr_fire_twr].y
            = all->twr->v_square[i].y - 80;
            sfSprite_setPosition(all->twr->sprite[6],
            all->twr->v_fire_tower[all->twr->nbr_fire_twr]);
            all->game->coin = all->game->coin - 20;
            if (all->game->coin < 0) {
                all->game->coin = all->game->coin + 20;
                a = 99;
            } else
            a = 100;
        }
    }
    if (a != 100) {
        all->twr->v_fire_tower[all->twr->nbr_fire_twr].x = 1030;
        all->twr->v_fire_tower[all->twr->nbr_fire_twr].x = 1080;
        sfSprite_setPosition(all->twr->sprite[6],
        all->twr->v_fire_tower[all->twr->nbr_fire_twr]);
    }
}

void check_square_ice(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos)
{
    int a = 0;

    for (int i = 0; i <= 29; i++) {
        if (mouse_pos.x > all->twr->v_square[i].x + 65 &&
            mouse_pos.x < all->twr->v_square[i].x + 130 &&
            mouse_pos.y > all->twr->v_square[i].y + 60 &&
            mouse_pos.y < all->twr->v_square[i].y + 120) {
            all->twr->v_ice_tower[all->twr->nbr_ice_twr].x
            = all->twr->v_square[i].x - 5;
            all->twr->v_ice_tower[all->twr->nbr_ice_twr].y
            = all->twr->v_square[i].y - 60;
            sfSprite_setPosition(all->twr->sprite[7],
            all->twr->v_ice_tower[all->twr->nbr_ice_twr]);
            all->game->coin = all->game->coin - 30;
            if (all->game->coin < 0) {
                all->game->coin = all->game->coin + 30;
                a = 99;
            } else
            a = 100;
        }
    }
    if (a != 100) {
        all->twr->v_ice_tower[all->twr->nbr_ice_twr].x = 1030;
        all->twr->v_ice_tower[all->twr->nbr_ice_twr].x = 1080;
        sfSprite_setPosition(all->twr->sprite[7],
        all->twr->v_ice_tower[all->twr->nbr_ice_twr]);
    }
}

void check_square_thunder(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos)
{
    int a = 0;

    for (int i = 0; i <= 29; i++) {
        if (mouse_pos.x > all->twr->v_square[i].x + 65 &&
            mouse_pos.x < all->twr->v_square[i].x + 130 &&
            mouse_pos.y > all->twr->v_square[i].y + 60 &&
            mouse_pos.y < all->twr->v_square[i].y + 120) {
            all->twr->v_thunder_tower[all->twr->nbr_thunder_twr].x
            = all->twr->v_square[i].x - 5;
            all->twr->v_thunder_tower[all->twr->nbr_thunder_twr].y
            = all->twr->v_square[i].y - 100;
            sfSprite_setPosition(all->twr->sprite[8],
            all->twr->v_thunder_tower[all->twr->nbr_thunder_twr]);
            all->game->coin = all->game->coin - 40;
            if (all->game->coin < 0) {
                all->game->coin = all->game->coin + 40;
                a = 99;
            } else
            a = 100;
        }
    }
    if (a != 100) {
        all->twr->v_thunder_tower[all->twr->nbr_thunder_twr].x = 1030;
        all->twr->v_thunder_tower[all->twr->nbr_thunder_twr].x = 1080;
        sfSprite_setPosition(all->twr->sprite[8],
        all->twr->v_thunder_tower[all->twr->nbr_thunder_twr]);
    }
}
