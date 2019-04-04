/*
** EPITECH PROJECT, 2019
** tower_tree.c
** File description:
** tower_tree.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void prs_tower_tree(all_t *all, sfRenderWindow *window, sfEvent event)
{
    sfVector2i mouse_pos = sfMouse_getPosition(NULL);

    if (sfMouse_isButtonPressed(sfMouseRight) == sfTrue) {
        all->twr->tower_tree = 0;
        if (mouse_pos.x > all->twr->v_canon_tree.x + 105 &&
            mouse_pos.x < all->twr->v_canon_tree.x + 175 &&
            mouse_pos.y > all->twr->v_canon_tree.y - 50 &&
            mouse_pos.y < all->twr->v_canon_tree.y + 60) {
            all->twr->tower_tree = 1;
        }
        if (mouse_pos.x > all->twr->v_fire_tree.x + 105 &&
            mouse_pos.x < all->twr->v_fire_tree.x + 175 &&
            mouse_pos.y > all->twr->v_fire_tree.y - 50 &&
            mouse_pos.y < all->twr->v_fire_tree.y + 60) {
            all->twr->tower_tree = 2;
        }
        prs_tower_tree2(all, window, event, mouse_pos);
    } else if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
        grab_tower(all, window, event, mouse_pos);
}

void prs_tower_tree2(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos)
{
    if (mouse_pos.x > all->twr->v_ice_tree.x + 105 &&
        mouse_pos.x < all->twr->v_ice_tree.x + 175 &&
        mouse_pos.y > all->twr->v_ice_tree.y - 50 &&
        mouse_pos.y < all->twr->v_ice_tree.y + 60) {
        all->twr->tower_tree = 3;
    }
    if (mouse_pos.x > all->twr->v_thunder_tree.x + 105 &&
        mouse_pos.x < all->twr->v_thunder_tree.x + 175 &&
        mouse_pos.y > all->twr->v_thunder_tree.y - 50 &&
        mouse_pos.y < all->twr->v_thunder_tree.y + 60) {
        all->twr->tower_tree = 4;
    }
}
