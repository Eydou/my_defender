/*
** EPITECH PROJECT, 2019
** big_button.c
** File description:
** big_button.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void big_resume(all_t *all, sfRenderWindow *window, sfEvent event)
{
    sfVector2i mouse_pos = sfMouse_getPosition(NULL);

    all->game->big_resume_btn = 0;
    all->game->big_song_on_off = 0;
    if (mouse_pos.x > all->game->v_resume.x + 50 &&
        mouse_pos.x < all->game->v_resume.x + 530 &&
        mouse_pos.y > all->game->v_resume.y + 65 &&
        mouse_pos.y < all->game->v_resume.y + 150)
        all->game->big_resume_btn = 2;
    if (mouse_pos.x > all->game->v_quit.x + 50 &&
        mouse_pos.x < all->game->v_quit.x + 530 &&
        mouse_pos.y > all->game->v_quit.y + 65 &&
        mouse_pos.y < all->game->v_quit.y + 150)
        all->game->big_resume_btn = 1;
    big_resume2(all, window, event, mouse_pos);
    cursor(all, window, event, mouse_pos);
}

void big_return(all_t *all, sfRenderWindow *window, sfEvent event)
{
    sfVector2i mouse_pos = sfMouse_getPosition(NULL);

    all->menu->big_htp = 0;
    if (mouse_pos.x > all->menu->v_return.x + 50 &&
        mouse_pos.x < all->menu->v_return.x + 140 &&
        mouse_pos.y > all->menu->v_return.y + 60 &&
        mouse_pos.y < all->menu->v_return.y + 140)
        all->menu->big_htp = 1;
}

void big_button_menu(all_t *all, sfRenderWindow *window, sfEvent event)
{
    sfVector2i mouse_pos = sfMouse_getPosition(NULL);

    all->menu->big_btn = 0;
    if (mouse_pos.x > all->menu->v_htp.x + 50 &&
        mouse_pos.x < all->menu->v_htp.x + 340 &&
        mouse_pos.y > all->menu->v_htp.y + 65 &&
        mouse_pos.y < all->menu->v_htp.y + 150)
        all->menu->big_btn = 1;
    if (mouse_pos.x > all->menu->v_quit.x + 50 &&
        mouse_pos.x < all->menu->v_quit.x + 335 &&
        mouse_pos.y > all->menu->v_quit.y + 67 &&
        mouse_pos.y < all->menu->v_quit.y + 167)
        all->menu->big_btn = 2;
    if (mouse_pos.x > all->menu->v_start.x + 50 &&
        mouse_pos.x < all->menu->v_start.x + 390 &&
        mouse_pos.y > all->menu->v_start.y + 65 &&
        mouse_pos.y < all->menu->v_start.y + 165)
        all->menu->big_btn = 3;
    cursor(all, window, event, mouse_pos);
}

void press_btn_game_over(all_t *all, sfRenderWindow *window, sfEvent event)
{
    sfVector2i mouse_pos = sfMouse_getPosition(NULL);

    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        if (mouse_pos.x > all->menu->v_start.x + 50 &&
            mouse_pos.x < all->menu->v_start.x + 390 &&
            mouse_pos.y > all->menu->v_start.y + 65 &&
            mouse_pos.y < all->menu->v_start.y + 165) {
            all->menu->gameloop = 1;
            music_menu(all);
        }
        if (mouse_pos.x > all->menu->v_quit.x + 50 &&
            mouse_pos.x < all->menu->v_quit.x + 335 &&
            mouse_pos.y > all->menu->v_quit.y + 67 &&
            mouse_pos.y < all->menu->v_quit.y + 167)
            all->menu->gameloop = 0;
    }
}

void cursor(all_t *all, sfRenderWindow *window, sfEvent event,
sfVector2i mouse_pos)
{
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    all->game->v_curseur.x = mouse_pos.x - 75;
    all->game->v_curseur.y = mouse_pos.y - 80;
    sfSprite_setPosition(all->game->sprite[5], all->game->v_curseur);
    sfRenderWindow_drawSprite(window, all->game->sprite[5], NULL);
}
