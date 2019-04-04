/*
** EPITECH PROJECT, 2019
** big_button.c
** File description:
** setup.
*/

#include "../include/my_src.h"
#include "../include/my_struct.h"

void big_resume2(all_t *all, sfRenderWindow *window, sfEvent event
, sfVector2i mouse_pos)
{
    if (mouse_pos.x > all->game->v_song.x + 50 &&
        mouse_pos.x < all->game->v_song.x + 250 &&
        mouse_pos.y > all->game->v_song.y + 65 &&
        mouse_pos.y < all->game->v_song.y + 265) {
        if (all->game->song_on_off == 2)
            all->game->big_song_on_off = 1;
        else if (all->game->song_on_off == 1)
            all->game->big_song_on_off = 2;
    }
}
