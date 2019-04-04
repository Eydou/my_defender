/*
** EPITECH PROJECT, 2019
** grab_tower2.c
** File description:
** grab_tower.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void grab_canon_tower2(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos)
{
    drw_game(all, window);
    my_game(all, window);
    my_enemies(all, window);
    draw_enemies(all, window);
    my_castle_life(all, window);
    sfRenderWindow_drawSprite(window, all->twr->sprite[9], NULL);
    draw_tower(all, window);
}

void grab_fire_tower2(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos)
{
    drw_game(all, window);
    my_game(all, window);
    my_enemies(all, window);
    draw_enemies(all, window);
    my_castle_life(all, window);
    sfRenderWindow_drawSprite(window, all->twr->sprite[9], NULL);
    draw_tower(all, window);
}

void grab_ice_tower2(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos)
{
    drw_game(all, window);
    my_game(all, window);
    my_enemies(all, window);
    draw_enemies(all, window);
    my_castle_life(all, window);
    sfRenderWindow_drawSprite(window, all->twr->sprite[9], NULL);
    draw_tower(all, window);
}

void grab_thunder_tower2(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos)
{
    drw_game(all, window);
    my_game(all, window);
    my_enemies(all, window);
    draw_enemies(all, window);
    my_castle_life(all, window);
    sfRenderWindow_drawSprite(window, all->twr->sprite[9], NULL);
    draw_tower(all, window);
}
