/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.
*/

#include "include/my_src.h"
#include "include/my_struct.h"
#include <string.h>

int main(int ac, char **av, char **env)
{
    sfRenderWindow *window;
    all_t *all = my_struct_all(all, window);
    sfVideoMode mode = {1080, 1030, 32};

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        my_help();
        for (int i = 0; i <= 9; i++)
            sfMusic_destroy(all->msc->game[i]);
        return (0);
    }
    window = sfRenderWindow_create(mode, "Fantasy TD",
    sfResize | sfClose,
    NULL);
    if (ac == 1 || all->cstl->life == 3) {
        drw_intro(all, window);
        my_start_game(all, window);
        for (int i = 0; i <= 13; i++)
            sfMusic_destroy(all->msc->game[i]);
        return (0);
    } else
        return (84);
}
