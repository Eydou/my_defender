/*
** EPITECH PROJECT, 2019
** run_defender.c
** File description:
** run the game.
*/

#include "../include/my_src.h"
#include "../include/my_struct.h"

int drw_intro(all_t *all, sfRenderWindow *window)
{
    int i = 0;

    while (i == 0) {
        my_intro(all, window);
        sfRenderWindow_drawSprite(window, all->game->sprite[12], NULL);
        sfRenderWindow_drawSprite(window, all->game->sprite[13], NULL);
        sfRenderWindow_display(window);
        if (all->game->seconds[2] > 4) {
            i = 1;
        }
    }
}

int my_start_game(all_t *all, sfRenderWindow *window)
{
    all->menu->gameloop = 1;
    while (sfRenderWindow_isOpen(window)) {
        while (all->menu->gameloop == 1) {
            drw_menu(all, window);
            my_event_type(all, window);
            sfRenderWindow_display(window);
            if (all->menu->gameloop == 0) {
                sfRenderWindow_destroy(window);
                return (0);
            }
        }
        while (all->menu->gameloop == 2) {
            drw_htp(all, window);
            my_event_type(all, window);
            sfRenderWindow_display(window);
        }
        if (my_gameloop(all, window) == 0)
            return (0);
    }
}

int my_gameloop(all_t *all, sfRenderWindow *window)
{
    all->twr->tower_tree = 0;
    while (all->menu->gameloop == 3) {
        drw_game(all, window);
        my_game(all, window);
        my_enemies(all, window);
        draw_enemies(all, window);
        my_castle_life(all, window);
        my_event_type(all, window);
        draw_tower(all, window);
        canon_tower_shoot_assassin(all, window);
        sfRenderWindow_display(window);
    }
    if (my_gameloop_start(all, window) == 0)
        return (0);
}

int my_gameloop_start(all_t *all, sfRenderWindow *window)
{
    while (all->menu->gameloop == 4) {
        drw_game(all, window);
        my_game(all, window);
        draw_enemies(all, window);
        my_castle_life(all, window);
        draw_tower(all, window);
        draw_start(all, window);
        my_event_type(all, window);
        sfRenderWindow_display(window);
    }
    if (end_of_the_game(all, window) == 0)
        return (0);
}

int end_of_the_game(all_t *all, sfRenderWindow *window)
{
    while (all->menu->gameloop == 5) {
        my_over(all, window);
        draw_game_over(all, window);
        sfRenderWindow_drawSprite(window, all->game->sprite[14], NULL);
        my_event_type(all, window);
        if (all->menu->gameloop == 0) {
            sfRenderWindow_destroy(window);
            return (0);
        }
        sfRenderWindow_display(window);
    }
}
