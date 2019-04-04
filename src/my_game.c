/*
** EPITECH PROJECT, 2019
** my_game.c
** File description:
** my_game.
*/

#include "../include/my_src.h"
#include "../include/my_struct.h"

void my_setup_event_type(all_t *all, sfRenderWindow *window, sfEvent event)
{
    big_button_menu(all, window, event);
    if (all->menu->gameloop == 2)
        big_return(all, window, event);
    if (all->menu->gameloop == 4)
        big_resume(all, window, event);
}

void my_setup_struct_game3(all_t *all, sfRenderWindow *window)
{
    all->game->pos[1] = vect_create_enm(30, 27);
    all->game->pos[2] = vect_create_enm(22, 157);
    all->game->pos[3] = vect_create_enm(45, 157);
    all->game->pos[4] = vect_create_enm(990, 157);
    all->game->pos[5] = vect_create_enm(1010, 157);
    all->game->coin = 19;
    all->game->wave = 1;
    all->game->lvl = 1;
}

void my_setup_castle(all_t *all, sfRenderWindow *window)
{
    if ((all->enm->c[1] == 2448 || all->enm->a[1] == 2448 ||
        all->enm->b[1] == 2448) && (all->cstl->life == 3)) {
        sfMusic_play(all->msc->game[13]);
        all->enm->nb_enm = all->enm->nb_enm - 1;
        all->cstl->life = 4;
    }
    if (all->cstl->life == 1)
        sfRenderWindow_drawSprite(window, all->cstl->sprite[1], NULL);
    if (all->cstl->life == 2)
        sfRenderWindow_drawSprite(window, all->cstl->sprite[2], NULL);
    if (all->cstl->life == 3)
        sfRenderWindow_drawSprite(window, all->cstl->sprite[3], NULL);
    if (all->cstl->life == 4) {
        all->menu->gameloop = 5;
        music_game_over(all);
    }
}

int my_castle_life(all_t *all, sfRenderWindow *window)
{
    if ((all->enm->a[1] == 2450 || all->enm->b[1] == 2450 ||
        all->enm->c[1] == 2450)
        && (all->cstl->life < 2)) {
        sfMusic_play(all->msc->game[13]);
        all->enm->nb_enm = all->enm->nb_enm - 1;
        all->cstl->life = 2;
    }
    if ((all->enm->a[1] == 2449 || all->enm->b[1] == 2449 ||
        all->enm->c[1] == 2449)
        && (all->cstl->life == 2)) {
        sfMusic_play(all->msc->game[13]);
        all->enm->nb_enm = all->enm->nb_enm - 1;
        all->cstl->life = 3;
    }
    my_setup_castle(all, window);
}

void my_game(all_t *all, sfRenderWindow *window)
{
    sfText_setString(all->game->txt[1], my_itoa(all->game->coin));
    sfText_setString(all->game->txt[2], my_itoa(all->game->wave));
    sfText_setString(all->game->txt[6], my_itoa(all->enm->life[1]));
    sfText_setString(all->game->txt[7], my_itoa(all->enm->life[2]));
    sfText_setString(all->game->txt[8], my_itoa(all->enm->life[3]));
    sfText_setString(all->game->txt[3], "/10");
    sfText_setString(all->game->txt[4], my_itoa(all->game->lvl));
    all->game->pos[6] = vect_create_enm(all->enm->x[1] - 30,
                                        all->enm->y[1] - 25);
    all->game->pos[7] = vect_create_enm(all->enm->x[2] - 30,
                                        all->enm->y[2] - 25);
    all->game->pos[8] = vect_create_enm(all->enm->x[3] - 30,
                                        all->enm->y[3] - 25);
    sfRenderWindow_drawSprite(window, all->game->sprite[1], NULL);
    sfText_setString(all->game->txt[5], "/2");
    for (int i = 6; i != 9; i++) {
    sfText_setPosition(all->game->txt[i], all->game->pos[i]);
    sfText_setColor(all->game->txt[i], sfRed);
    }
    sfText_setColor(all->game->txt[1], sfYellow);
}
