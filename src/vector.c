/*
** EPITECH PROJECT, 2019
** vector.c
** File description:
** vector.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void vector_tree_tower(all_t *all)
{
    all->twr->v_canon_tree.x = 136;
    all->twr->v_canon_tree.y = 213;
    all->twr->v_fire_tree.x = 351;
    all->twr->v_fire_tree.y = 213;
    all->twr->v_ice_tree.x = 560;
    all->twr->v_ice_tree.y = 213;
    all->twr->v_thunder_tree.x = 765;
    all->twr->v_thunder_tree.y = 213;
    sfSprite_setPosition(all->twr->sprite[1], all->twr->v_canon_tree);
    sfSprite_setPosition(all->twr->sprite[2], all->twr->v_fire_tree);
    sfSprite_setPosition(all->twr->sprite[3], all->twr->v_ice_tree);
    sfSprite_setPosition(all->twr->sprite[4], all->twr->v_thunder_tree);
}

void vector_tower(all_t *all)
{
    all->twr->nbr_canon_twr = 1;
    all->twr->nbr_fire_twr = 1;
    all->twr->nbr_ice_twr = 1;
    all->twr->nbr_thunder_twr = 1;
    all->twr->v_canon_tower = malloc(sizeof(sfVector2f) * 101);
    all->twr->v_fire_tower = malloc(sizeof(sfVector2f) * 101);
    all->twr->v_ice_tower = malloc(sizeof(sfVector2f) * 101);
    all->twr->v_thunder_tower = malloc(sizeof(sfVector2f) * 101);
    for (int i = 1; i < 100; i++) {
        all->twr->v_canon_tower[i].x = 136;
        all->twr->v_canon_tower[i].y = 213;
        all->twr->v_fire_tower[i].x = 336;
        all->twr->v_fire_tower[i].y = 213;
        all->twr->v_ice_tower[i].x = 536;
        all->twr->v_ice_tower[i].y = 213;
        all->twr->v_thunder_tower[i].x = 736;
        all->twr->v_thunder_tower[i].y = 213;
    }
    vector_tower2(all);
}

void vector_tower2(all_t *all)
{
    all->twr->v_canon_ball.x = 50;
    all->twr->v_canon_ball.y = 50;
    all->twr->v_fire_ball.x = 250;
    all->twr->v_fire_ball.y = 250;
    all->twr->v_ice_pick.x = 450;
    all->twr->v_ice_pick.y = 450;
    all->twr->v_thunder_ball.x = 650;
    all->twr->v_thunder_ball.y = 650;
    sfSprite_setPosition(all->twr->sprite[11], all->twr->v_canon_ball);
    sfSprite_setPosition(all->twr->sprite[12], all->twr->v_fire_ball);
    sfSprite_setPosition(all->twr->sprite[13], all->twr->v_ice_pick);
    sfSprite_setPosition(all->twr->sprite[14], all->twr->v_thunder_ball);
}

void vector_game(all_t *all)
{
    all->game->song_on_off = 1;
    all->game->v_resume.x = 300;
    all->game->v_resume.y = 400;
    all->game->v_quit.x = 300;
    all->game->v_quit.y = 600;
    all->game->v_castle.x = 1024;
    all->game->v_castle.y = 739;
    all->game->v_song.x = 20;
    all->game->v_song.y	= 800;
    sfSprite_setPosition(all->game->sprite[9], all->game->v_song);
    sfSprite_setPosition(all->game->sprite[10], all->game->v_song);
    sfSprite_setPosition(all->game->sprite[8], all->game->v_castle);
    sfSprite_setPosition(all->game->sprite[3], all->game->v_resume);
    sfSprite_setPosition(all->game->sprite[4], all->game->v_quit);
    sfSprite_setPosition(all->game->sprite[6], all->game->v_quit);
    sfSprite_setPosition(all->game->sprite[7], all->game->v_resume);
}

void vector_menu(all_t *all)
{
    all->menu->v_htp.x = 22;
    all->menu->v_htp.y = 800;
    all->menu->v_start.x = 575;
    all->menu->v_start.y = 650;
    all->menu->v_quit.x = 600;
    all->menu->v_quit.y = 800;
    all->menu->v_return.x = 20;
    all->menu->v_return.y = 930;
    all->menu->v_return_big.x = 10;
    all->menu->v_return_big.y = 920;
    sfSprite_setPosition(all->menu->sprite[3], all->menu->v_htp);
    sfSprite_setPosition(all->menu->sprite[4], all->menu->v_start);
    sfSprite_setPosition(all->menu->sprite[5], all->menu->v_quit);
    sfSprite_setPosition(all->menu->sprite[6], all->menu->v_return);
    sfSprite_setPosition(all->menu->sprite[7], all->menu->v_htp);
    sfSprite_setPosition(all->menu->sprite[8], all->menu->v_start);
    sfSprite_setPosition(all->menu->sprite[9], all->menu->v_quit);
}
