/*
** EPITECH PROJECT, 2019
** grab_tower.c
** File description:
** grab_tower.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void grab_tower(all_t *all, sfRenderWindow *window,
                sfEvent event, sfVector2i m_p)
{
    if (m_p.x > all->twr->v_canon_tower[all->twr->nbr_canon_twr].x + 105 &&
        m_p.x < all->twr->v_canon_tower[all->twr->nbr_canon_twr].x + 175 &&
        m_p.y > all->twr->v_canon_tower[all->twr->nbr_canon_twr].y - 50 &&
        m_p.y < all->twr->v_canon_tower[all->twr->nbr_canon_twr].y + 60)
        grab_canon_tower(all, window, event, m_p);
    if (m_p.x > all->twr->v_fire_tower[all->twr->nbr_fire_twr].x + 105 &&
        m_p.x < all->twr->v_fire_tower[all->twr->nbr_fire_twr].x + 175 &&
        m_p.y > all->twr->v_fire_tower[all->twr->nbr_fire_twr].y - 50 &&
        m_p.y < all->twr->v_fire_tower[all->twr->nbr_fire_twr].y + 60)
        grab_fire_tower(all, window, event, m_p);
    if (m_p.x > all->twr->v_ice_tower[all->twr->nbr_ice_twr].x + 105 &&
        m_p.x < all->twr->v_ice_tower[all->twr->nbr_ice_twr].x + 175 &&
        m_p.y > all->twr->v_ice_tower[all->twr->nbr_ice_twr].y - 50 &&
        m_p.y < all->twr->v_ice_tower[all->twr->nbr_ice_twr].y + 60)
        grab_ice_tower(all, window, event, m_p);
    if (m_p.x > all->twr->v_thunder_tower[all->twr->nbr_thunder_twr].x + 105 &&
        m_p.x < all->twr->v_thunder_tower[all->twr->nbr_thunder_twr].x + 185 &&
        m_p.y > all->twr->v_thunder_tower[all->twr->nbr_thunder_twr].y - 50 &&
        m_p.y < all->twr->v_thunder_tower[all->twr->nbr_thunder_twr].y + 60)
        grab_thunder_tower(all, window, event, m_p);
}

void grab_canon_tower(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos)
{
    while (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        grab_canon_tower2(all, window, event, mouse_pos);
        mouse_pos = sfMouse_getPosition(NULL);
        all->twr->v_canon_tower[all->twr->nbr_canon_twr].x = mouse_pos.x - 89;
        all->twr->v_canon_tower[all->twr->nbr_canon_twr].y = mouse_pos.y - 140;
        all->twr->v_range.x = mouse_pos.x - 200;
        all->twr->v_range.y = mouse_pos.y - 200;
        sfSprite_setPosition(all->twr->sprite[10],
        all->twr->v_range);
        sfSprite_setPosition(all->twr->sprite[5],
        all->twr->v_canon_tower[all->twr->nbr_canon_twr]);
        sfRenderWindow_drawSprite(window, all->twr->sprite[5], NULL);
        sfRenderWindow_drawSprite(window, all->twr->sprite[10], NULL);
        canon_tower_shoot_assassin(all, window);
        cursor(all, window, event, mouse_pos);
        sfRenderWindow_display(window);
    }
    check_square_canon(all, window, event, mouse_pos);
    all->twr->nbr_canon_twr = all->twr->nbr_canon_twr + 1;
}

void grab_fire_tower(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos)
{
    while (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        grab_fire_tower2(all, window, event, mouse_pos);
        mouse_pos = sfMouse_getPosition(NULL);
        all->twr->v_fire_tower[all->twr->nbr_fire_twr].x = mouse_pos.x - 89;
        all->twr->v_fire_tower[all->twr->nbr_fire_twr].y = mouse_pos.y - 140;
        all->twr->v_range.x = mouse_pos.x - 200;
        all->twr->v_range.y = mouse_pos.y - 200;
        sfSprite_setPosition(all->twr->sprite[10],
        all->twr->v_range);
        sfSprite_setPosition(all->twr->sprite[6],
        all->twr->v_fire_tower[all->twr->nbr_fire_twr]);
        sfRenderWindow_drawSprite(window, all->twr->sprite[6], NULL);
        sfRenderWindow_drawSprite(window, all->twr->sprite[10], NULL);
        cursor(all, window, event, mouse_pos);
        sfRenderWindow_display(window);
    }
    check_square_fire(all, window, event, mouse_pos);
    all->twr->nbr_fire_twr = all->twr->nbr_fire_twr + 1;
}

void grab_ice_tower(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos)
{
    while (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        grab_ice_tower2(all, window, event, mouse_pos);
        mouse_pos = sfMouse_getPosition(NULL);
        all->twr->v_ice_tower[all->twr->nbr_ice_twr].x = mouse_pos.x - 89;
        all->twr->v_ice_tower[all->twr->nbr_ice_twr].y = mouse_pos.y - 140;
        all->twr->v_range.x = mouse_pos.x - 200;
        all->twr->v_range.y = mouse_pos.y - 200;
        sfSprite_setPosition(all->twr->sprite[10],
        all->twr->v_range);
        sfSprite_setPosition(all->twr->sprite[7],
        all->twr->v_ice_tower[all->twr->nbr_ice_twr]);
        sfRenderWindow_drawSprite(window, all->twr->sprite[7], NULL);
        sfRenderWindow_drawSprite(window, all->twr->sprite[10], NULL);
        cursor(all, window, event, mouse_pos);
        sfRenderWindow_display(window);
    }
    check_square_ice(all, window, event, mouse_pos);
    all->twr->nbr_ice_twr = all->twr->nbr_ice_twr + 1;
}

void grab_thunder_tower(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i m_p)
{
    while (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        grab_thunder_tower2(all, window, event, m_p);
        m_p = sfMouse_getPosition(NULL);
        all->twr->v_thunder_tower[all->twr->nbr_thunder_twr].x = m_p.x - 89;
        all->twr->v_thunder_tower[all->twr->nbr_thunder_twr].y = m_p.y - 140;
        all->twr->v_range.x = m_p.x - 200;
        all->twr->v_range.y = m_p.y - 200;
        sfSprite_setPosition(all->twr->sprite[10],
        all->twr->v_range);
        sfSprite_setPosition(all->twr->sprite[8],
        all->twr->v_thunder_tower[all->twr->nbr_thunder_twr]);
        sfRenderWindow_drawSprite(window, all->twr->sprite[8], NULL);
        sfRenderWindow_drawSprite(window, all->twr->sprite[10], NULL);
        cursor(all, window, event, m_p);
        sfRenderWindow_display(window);
    }
    check_square_thunder(all, window, event, m_p);
    all->twr->nbr_thunder_twr = all->twr->nbr_thunder_twr + 1;
}
