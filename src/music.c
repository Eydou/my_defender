/*
** EPITECH PROJECT, 2019
** music.c
** File description:
** music.
*/

#include "my_src.h"
#include "my_struct.h"

void my_struct_music(all_t *all, sfRenderWindow *window)
{
    all->msc->game = malloc(sizeof(sfMusic *) * 20);
    all->msc->game[1] = sfMusic_createFromFile("music/menu/menu.ogg");
    all->msc->game[2] = sfMusic_createFromFile("music/game/game.ogg");
    all->msc->game[3] = sfMusic_createFromFile("music/menu/play.wav");
    all->msc->game[4] = sfMusic_createFromFile("music/game/cnon.wav");
    all->msc->game[5] = sfMusic_createFromFile("music/game/fire.wav");
    all->msc->game[6] = sfMusic_createFromFile("music/game/ice.wav");
    all->msc->game[7] = sfMusic_createFromFile("music/game/thunder.wav");
    all->msc->game[8] = sfMusic_createFromFile("music/game/up.wav");
    all->msc->game[9] = sfMusic_createFromFile("music/game/hurt.ogg");
    all->msc->game[10] = sfMusic_createFromFile("music/game/game_over.ogg");
    all->msc->game[11] = sfMusic_createFromFile("music/game/hurt_d.ogg");
    all->msc->game[12] = sfMusic_createFromFile("music/game/hurt_k.ogg");
    all->msc->game[13] = sfMusic_createFromFile("music/game/life.ogg");
    sfMusic_play(all->msc->game[1]);
    sfMusic_setLoop(all->msc->game[1], sfTrue);
}

void music_menu(all_t *all)
{
    sfMusic_pause(all->msc->game[2]);
    sfMusic_pause(all->msc->game[10]);
    sfMusic_play(all->msc->game[1]);
    sfMusic_setLoop(all->msc->game[1], sfTrue);
}

void music_game(all_t *all)
{
    sfMusic_pause(all->msc->game[1]);
    sfMusic_pause(all->msc->game[10]);
    sfMusic_play(all->msc->game[2]);
    sfMusic_setLoop(all->msc->game[2], sfTrue);
}

void music_game_over(all_t *all)
{
    sfMusic_pause(all->msc->game[1]);
    sfMusic_pause(all->msc->game[2]);
    sfMusic_play(all->msc->game[10]);
    sfMusic_setLoop(all->msc->game[2], sfTrue);
}
