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
    static int boss = 0;
    if (all->enm->nb_enm == 0) {
        all->game->wave = all->game->wave + 1;
        if (all->game->wave == 5) {
            all->enm->life[3] = all->enm->life[3] + boss;
            boss = boss + 50;
        }
        if (all->game->wave == 10) {
            all->enm->life[3] = all->enm->life[3] + boss;
            boss = boss + 80;
        }
        if (all->game->wave == 11) {
            all->game->lvl = all->game->lvl++;
            all->game->wave = 1;
        }
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
        if (all->game->wave == 10 || all->game->wave == 5)
            all->game->coin = all->game->coin + 15;
        all->game->coin = all->game->coin + 8;
        all->enm->nb_enm = all->enm->nb_enm - 1;
        all->enm->life[3] = 8 + all->game->wave + w + 2;
    }
    my_setup_handler2(all, window, w);
}

void my_handler_enm(all_t *all, sfRenderWindow *window)
{
    static int w = 3;

    if (all->enm->life[1] < 1) {
        sfMusic_play(all->msc->game[9]);
        all->enm->a[1] = 3500;
        all->enm->x[1] = 2000;
        all->game->coin = all->game->coin + 4;
        all->enm->nb_enm = all->enm->nb_enm - 1;
        all->enm->life[1] = 3 + all->game->wave + w;
        w = w + 5;
    }
    if (all->enm->life[2] < 1) {
        sfMusic_play(all->msc->game[12]);
        all->enm->b[1] = 3500;
        all->enm->x[2] = 2000;
        all->game->coin = all->game->coin + 6;
        all->enm->nb_enm = all->enm->nb_enm - 1;
        all->enm->life[2] = 5 + all->game->wave + w;
    }
    my_setup_handler(all, window, w);
}
