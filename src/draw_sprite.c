/*
** EPITECH PROJECT, 2019
** draw_spite.c
** File description:
** draw_sprite.c
*/

#include "../include/my_src.h"
#include "../include/my_struct.h"

void draw_tower(all_t *all, sfRenderWindow *window)
{
    for (int i = 1; i < all->twr->nbr_canon_twr; i++) {
        sfSprite_setPosition(all->twr->sprite[5], all->twr->v_canon_tower[i]);
        sfRenderWindow_drawSprite(window, all->twr->sprite[5], NULL);
    }
    for (int i = 1; i < all->twr->nbr_fire_twr; i++) {
        sfSprite_setPosition(all->twr->sprite[6], all->twr->v_fire_tower[i]);
        sfRenderWindow_drawSprite(window, all->twr->sprite[6], NULL);
    }
    for (int i = 1; i < all->twr->nbr_ice_twr; i++) {
        sfSprite_setPosition(all->twr->sprite[7], all->twr->v_ice_tower[i]);
        sfRenderWindow_drawSprite(window, all->twr->sprite[7], NULL);
    }
    for (int i = 1; i < all->twr->nbr_thunder_twr; i++) {
        sfSprite_setPosition(all->twr->sprite[8], all->twr->v_thunder_tower[i]);
        sfRenderWindow_drawSprite(window, all->twr->sprite[8], NULL);
    }
    draw_tower_tree(all, window);
}

void draw_tower_tree(all_t *all, sfRenderWindow *window)
{
    switch (all->twr->tower_tree) {
    case (1):
        sfRenderWindow_drawSprite(window, all->twr->sprite[1], NULL);
        break;
    case (2):
        sfRenderWindow_drawSprite(window, all->twr->sprite[2], NULL);
        break;
    case (3):
        sfRenderWindow_drawSprite(window, all->twr->sprite[3], NULL);
        break;
    case (4):
        sfRenderWindow_drawSprite(window, all->twr->sprite[4], NULL);
        break;
    default:
        break;
    }
    sfRenderWindow_drawSprite(window, all->game->sprite[5], NULL);
}

void draw_enemies(all_t *all, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, all->enm->sprite_k[1], NULL);
    sfRenderWindow_drawSprite(window, all->enm->sprite_d[1], NULL);
    sfRenderWindow_drawSprite(window, all->enm->sprite[1], NULL);
    sfRenderWindow_drawSprite(window, all->game->sprite[8], NULL);
    for (int i = 1; i != 9; i++)
        sfRenderWindow_drawText(window, all->game->txt[i], NULL);
}
