/*
** EPITECH PROJECT, 2019
** my_struct_all.c
** File description:
** structure for the all game.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void my_struct_game(all_t *all, sfRenderWindow *window)
{
    all->game->sprite = malloc(sizeof(sfSprite *) * 16);
    all->game->txture = malloc(sizeof(sfTexture *) * 16);
    all->game->txt = malloc(sizeof(sfText *) * 11);
    all->game->pos = malloc(sizeof(sfVector2f) * 15);
    for (int j = 1; j != 9; j++)
        all->game->txt[j] = sfText_create();
    all->game->font = sfFont_createFromFile("my_font/pixel.ttf");
    for (int l = 1; l != 9; l++)
        sfText_setFont(all->game->txt[l], all->game->font);
    sfText_setCharacterSize(all->game->txt[1], 60);
    all->game->txture[1] = sfTexture_createFromFile
        ("pictures/map/map_lvl1.png", NULL);
    my_struct_game2(all, window);
    my_setup_struct_game(all, window);
    for (int i = 1; i <= 15; i++)
        all->game->sprite[i] = sfSprite_create();
    for (int j = 1; j <= 15; j++)
        sfSprite_setTexture(all->game->sprite[j], all->game->txture[j], sfTrue);
    rect_over(all, 0, 1080, 1085);
    vector_game(all);
}

void my_struct_game2(all_t *all, sfRenderWindow *window)
{
    all->game->txture[2] = sfTexture_createFromFile
        ("pictures/map/map_lvl1.png", NULL);
    all->game->txture[3] = sfTexture_createFromFile
        ("pictures/menu/resume1.png", NULL);
    all->game->txture[4] = sfTexture_createFromFile
        ("pictures/menu/quit.png", NULL);
    all->game->txture[5] = sfTexture_createFromFile
        ("pictures/map/curseur.png", NULL);
    all->game->txture[6] = sfTexture_createFromFile
        ("pictures/menu/resume_big.png", NULL);
    all->game->txture[7] = sfTexture_createFromFile
        ("pictures/menu/quit_big.png", NULL);
    all->game->txture[8] = sfTexture_createFromFile
        ("pictures/map/castle.png", NULL);
    all->game->txture[9] = sfTexture_createFromFile
        ("pictures/menu/song_on.png", NULL);
    all->game->txture[10] = sfTexture_createFromFile
        ("pictures/menu/song_off.png", NULL);
    all->game->txture[11] = sfTexture_createFromFile
        ("pictures/menu/game_over.png", NULL);
}

void my_struct_menu(all_t *all, sfRenderWindow *window)
{
    all->menu->sprite = malloc(sizeof(sfSprite *) * 11);
    all->menu->txture = malloc(sizeof(sfTexture *) * 11);
    all->menu->txture[1] = sfTexture_createFromFile
        ("pictures/menu/menu.png", NULL);
    all->menu->txture[2] = sfTexture_createFromFile
        ("pictures/menu/hwtplay.png", NULL);
    all->menu->txture[3] = sfTexture_createFromFile
        ("pictures/menu/btn_htp.png", NULL);
    all->menu->txture[4] = sfTexture_createFromFile
        ("pictures/menu/start.png", NULL);
    all->menu->txture[5] = sfTexture_createFromFile
        ("pictures/menu/quit_game.png", NULL);
    my_struct_menu2(all, window);
    for (int i = 1; i <= 10; i++)
        all->menu->sprite[i] = sfSprite_create();
    for (int j = 1; j <= 10; j++)
        sfSprite_setTexture(all->menu->sprite[j], all->menu->txture[j], sfTrue);
    vector_menu(all);
}

void my_struct_menu2(all_t *all, sfRenderWindow *window)
{
    all->menu->txture[6] = sfTexture_createFromFile
        ("pictures/menu/return.png", NULL);
    all->menu->txture[7] = sfTexture_createFromFile
        ("pictures/menu/btn_htp_big.png", NULL);
    all->menu->txture[8] = sfTexture_createFromFile
        ("pictures/menu/start_big.png", NULL);
    all->menu->txture[9] = sfTexture_createFromFile
        ("pictures/menu/quit_game_big.png", NULL);
    all->menu->txture[10] = sfTexture_createFromFile
        ("pictures/menu/return_big.png", NULL);
}

all_t *my_struct_all(all_t *all, sfRenderWindow *window)
{
    all = malloc(sizeof(all_t));
    all->msc = malloc(sizeof(music_t));
    all->menu = malloc(sizeof(menu_t));
    all->rsme = malloc(sizeof(resume_t));
    all->game = malloc(sizeof(game_t));
    all->twr = malloc(sizeof(tower_t));
    all->enm = malloc(sizeof(enemies_t));
    all->cstl = malloc(sizeof(castle_t));
    my_struct_music(all, window);
    my_struct_menu(all, window);
    my_struct_game(all, window);
    my_struct_tower(all, window);
    my_struct_enm(all, window);
    my_struct_castle(all, window);
    return (all);
}
