/*
** EPITECH PROJECT, 2019
** button_menu.c
** File description:
** button_menu.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void prs_btn_menu(all_t *all, sfRenderWindow *window, sfEvent event)
{
    sfVector2i mouse_pos = sfMouse_getPosition(NULL);

    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        if (mouse_pos.x > all->menu->v_htp.x + 50 &&
            mouse_pos.x < all->menu->v_htp.x + 340 &&
            mouse_pos.y > all->menu->v_htp.y + 65 &&
            mouse_pos.y < all->menu->v_htp.y + 150) {
            all->menu->gameloop = 2;
        }
        if (mouse_pos.x > all->menu->v_quit.x + 50 &&
            mouse_pos.x < all->menu->v_quit.x + 335 &&
            mouse_pos.y > all->menu->v_quit.y + 67 &&
            mouse_pos.y < all->menu->v_quit.y + 167) {
            all->menu->gameloop = 0;
        }
    }
    prs_btn_menu2(all, window, event, mouse_pos);
}

void prs_btn_menu2(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        if (mouse_pos.x > all->menu->v_start.x + 50 &&
            mouse_pos.x < all->menu->v_start.x + 390 &&
            mouse_pos.y > all->menu->v_start.y + 65 &&
            mouse_pos.y < all->menu->v_start.y + 165) {
            music_game(all);
            all->menu->gameloop = 3;
        }
    }
}

void prs_btn_htp(all_t *all, sfRenderWindow *window, sfEvent event)
{
    sfVector2i mouse_pos = sfMouse_getPosition(NULL);

    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        if (mouse_pos.x > all->menu->v_return.x + 50 &&
            mouse_pos.x < all->menu->v_return.x + 140 &&
            mouse_pos.y > all->menu->v_return.y + 60 &&
            mouse_pos.y < all->menu->v_return.y + 140) {
            all->menu->gameloop = 1;
        }
    }
}

void draw_start2(all_t *all, sfRenderWindow *window)
{
    switch (all->game->song_on_off) {
    case (1):
        sfRenderWindow_drawSprite(window, all->game->sprite[9], NULL);
        break;
    case (2):
        sfRenderWindow_drawSprite(window, all->game->sprite[10], NULL);
        break;
    }
    switch (all->game->big_song_on_off) {
    case (1):
        sfRenderWindow_drawSprite(window, all->game->sprite[9], NULL);
        break;
    case (2):
        sfRenderWindow_drawSprite(window, all->game->sprite[10], NULL);
        break;
    }
}
