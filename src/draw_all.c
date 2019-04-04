/*
** EPITECH PROJECT, 2019
** draw_all.c
** File description:
** draw_all.
*/

#include "../include/my_src.h"
#include "../include/my_struct.h"

void drw_menu(all_t *all, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, all->menu->sprite[1], NULL);
    sfRenderWindow_drawSprite(window, all->menu->sprite[3], NULL);
    sfRenderWindow_drawSprite(window, all->menu->sprite[4], NULL);
    sfRenderWindow_drawSprite(window, all->menu->sprite[5], NULL);
    switch (all->menu->big_btn) {
    case (1):
        sfRenderWindow_drawSprite(window, all->menu->sprite[7], NULL);
        break;
    case (2):
        sfRenderWindow_drawSprite(window, all->menu->sprite[9], NULL);
        break;
    case (3):
        sfRenderWindow_drawSprite(window, all->menu->sprite[8], NULL);
        break;
    default:
        break;
    }
    sfRenderWindow_drawSprite(window, all->game->sprite[5], NULL);
}

void drw_htp(all_t *all, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, all->menu->sprite[2], NULL);
    sfRenderWindow_drawSprite(window, all->menu->sprite[6], NULL);
    if (all->menu->big_htp == 1) {
        sfSprite_setPosition(all->menu->sprite[10], all->menu->v_return_big);
        sfRenderWindow_drawSprite(window, all->menu->sprite[10], NULL);
    }
    sfRenderWindow_drawSprite(window, all->game->sprite[5], NULL);
}

void drw_game(all_t *all, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, all->game->sprite[1], NULL);
    sfRenderWindow_drawSprite(window, all->game->sprite[2], NULL);
    sfRenderWindow_drawSprite(window, all->game->sprite[5], NULL);
}

void draw_game_over(all_t *all, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, all->game->sprite[11], NULL);
    sfRenderWindow_drawSprite(window, all->menu->sprite[4], NULL);
    sfRenderWindow_drawSprite(window, all->menu->sprite[5], NULL);
    sfRenderWindow_drawSprite(window, all->game->sprite[5], NULL);
}

void draw_start(all_t *all, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, all->game->sprite[3], NULL);
    sfRenderWindow_drawSprite(window, all->game->sprite[4], NULL);
    switch (all->game->big_resume_btn) {
    case (1):
        sfRenderWindow_drawSprite(window, all->game->sprite[6], NULL);
        break;
    case (2):
        sfRenderWindow_drawSprite(window, all->game->sprite[7], NULL);
        break;
    }
    draw_start2(all, window);
    sfRenderWindow_drawSprite(window, all->game->sprite[5], NULL);
}
