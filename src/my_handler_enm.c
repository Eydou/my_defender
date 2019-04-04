/*
** EPITECH PROJECT, 2019
** my_handler_enm.c
** File description:
** my_handler_enm.
*/

#include "../include/my_src.h"
#include "../include/my_struct.h"

void my_setup_handler2(all_t *all, sfRenderWindow *window, int w)
{
    if (all->enm->nb_enm == 0) {
        all->game->wave = all->game->wave + 1;
        if (all->game->wave == 5)
            w = 30;
        if (all->game->wave == 9)
            w = 85;
        all->enm->a[1] = 0;
        all->enm->x[1] = 0;
        all->enm->y[1] = 285;
        all->enm->b[1] = 0;
        all->enm->x[2] = 0;
        all->enm->y[2] = 285;
        all->enm->c[1] = 0;
        all->enm->x[3] = 0;
        all->enm->y[3] = 285;
        all->enm->nb_enm = 3;
    }
    if (all->game->coin > 99)
        all->game->coin = 99;
}

void my_setup_handler(all_t *all, sfRenderWindow *window, int w)
{
    if (all->enm->life[3] < 1) {
        sfMusic_play(all->msc->game[11]);
        all->enm->c[1] = 3500;
        all->enm->x[3] = 2000;
        all->game->coin = all->game->coin + 7;
        all->enm->nb_enm = all->enm->nb_enm - 1;
        all->enm->life[3] = 8 + all->game->wave + w;
    }
    my_setup_handler2(all, window, w);
}

void my_handler_enm(all_t *all, sfRenderWindow *window)
{
    static int w = 2;

    if (all->enm->life[1] < 1) {
        sfMusic_play(all->msc->game[9]);
        all->enm->a[1] = 3500;
        all->enm->x[1] = 2000;
        all->game->coin = all->game->coin + 3;
        all->enm->nb_enm = all->enm->nb_enm - 1;
        all->enm->life[1] = 3 + all->game->wave + w;
        w = w + 5;
    }
    if (all->enm->life[2] < 1) {
        sfMusic_play(all->msc->game[12]);
        all->enm->b[1] = 3500;
        all->enm->x[2] = 2000;
        all->game->coin = all->game->coin + 5;
        all->enm->nb_enm = all->enm->nb_enm - 1;
        all->enm->life[2] = 5 + all->game->wave + w;
    }
    my_setup_handler(all, window, w);
}
