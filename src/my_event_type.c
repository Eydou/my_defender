/*
** EPITECH PROJECT, 2019
** my_event_type.c
** File description:
** event for the game.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void my_event_type(all_t *all, sfRenderWindow *window)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        switch (event.type) {
        case (sfEvtClosed):
            sfRenderWindow_close(window);
            all->menu->gameloop = 0;
            break;
        case (sfEvtMouseButtonPressed):
            sfMusic_play(all->msc->game[3]);
            prs_btn(all, window, event);
            break;
        case (sfEvtKeyPressed):
            if (sfKeyboard_isKeyPressed(sfKeyEscape) &&
                all->menu->gameloop == 3) {
                all->menu->gameloop = 4;
            }
        }
        my_setup_event_type(all, window, event);
    }
}

void prs_btn(all_t *all, sfRenderWindow *window, sfEvent event)
{
    switch (all->menu->gameloop) {
    case (1):
        prs_btn_menu(all, window, event);
        break;
    case (2):
        prs_btn_htp(all, window, event);
        break;
    case (3):
        prs_tower_tree(all, window, event);
        prs_start(all, window, event);
        break;
    case (4):
        resume(all, window, event);
        break;
    case (5):
        press_btn_game_over(all, window, event);
        break;
    }
}

void resume(all_t *all, sfRenderWindow *window, sfEvent event)
{
    sfVector2i mouse_pos = sfMouse_getPosition(NULL);

    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        if (mouse_pos.x > all->game->v_resume.x + 50 &&
            mouse_pos.x < all->game->v_resume.x + 530 &&
            mouse_pos.y > all->game->v_resume.y + 65 &&
            mouse_pos.y < all->game->v_resume.y + 150)
            all->menu->gameloop = 3;
        if (mouse_pos.x > all->game->v_quit.x + 50 &&
            mouse_pos.x < all->game->v_quit.x + 530 &&
            mouse_pos.y > all->game->v_quit.y + 65 &&
            mouse_pos.y < all->game->v_quit.y + 150) {
            music_menu(all);
            all->menu->gameloop = 1;
        }
        resume2(all, window, event, mouse_pos);
    }
}

void resume2(all_t *all, sfRenderWindow *window, sfEvent event,
sfVector2i mouse_pos)
{
    if (mouse_pos.x > all->game->v_song.x + 50 &&
        mouse_pos.x < all->game->v_song.x + 250 &&
        mouse_pos.y > all->game->v_song.y + 65 &&
        mouse_pos.y < all->game->v_song.y + 265) {
        if (all->game->song_on_off == 2) {
            all->game->song_on_off = 1;
            sfMusic_play(all->msc->game[2]);
            sfMusic_setLoop(all->msc->game[2], sfTrue);
        } else if (all->game->song_on_off == 1) {
            all->game->song_on_off = 2;
            sfMusic_pause(all->msc->game[2]);
        }
    }
}

void prs_start(all_t *all, sfRenderWindow *window, sfEvent event)
{
    sfVector2i mouse_pos = sfMouse_getPosition(NULL);

    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        if (mouse_pos.x > 1000 && mouse_pos.x < 1110 &&
            mouse_pos.y > 70 && mouse_pos.y < 180) {
            all->menu->gameloop = 4;
        }
    }
}
