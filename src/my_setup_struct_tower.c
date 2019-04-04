/*
** EPITECH PROJECT, 2019
** my_setup_struct_all.c
** File description:
** next struct for all struct.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void my_struct_tower(all_t *all, sfRenderWindow *window)
{
    all->twr->sprite = malloc(sizeof(sfSprite *) * 15);
    all->twr->txture = malloc(sizeof(sfTexture *) * 15);
    all->twr->txture[1] = sfTexture_createFromFile
        ("pictures/tower/skill_tree_canon.png", NULL);
    all->twr->txture[2] = sfTexture_createFromFile
        ("pictures/tower/skill_tree_fire.png", NULL);
    all->twr->txture[3] = sfTexture_createFromFile
        ("pictures/tower/skill_tree_ice.png", NULL);
    my_struct_tower2(all, window);
    my_struct_tower3(all, window);
    for (int i = 1; i <= 14; i++)
        all->twr->sprite[i] = sfSprite_create();
    for (int j = 1; j <= 14; j++)
        sfSprite_setTexture(all->twr->sprite[j], all->twr->txture[j], sfTrue);
    vector_tower(all);
    vector_tree_tower(all);
    vector_square(all);
    vector_square2(all);
    vector_square3(all);
    vector_square4(all);
}

void my_struct_tower2(all_t *all, sfRenderWindow *window)
{
    all->twr->txture[4] = sfTexture_createFromFile
        ("pictures/tower/skill_tree_thunder.png", NULL);
    all->twr->txture[5] = sfTexture_createFromFile
        ("pictures/tower/tower-canon.png", NULL);
    all->twr->txture[6] = sfTexture_createFromFile
        ("pictures/tower/tower-magic.png", NULL);
    all->twr->txture[7] = sfTexture_createFromFile
        ("pictures/tower/tower-ice.png", NULL);
    all->twr->txture[8] = sfTexture_createFromFile
        ("pictures/tower/tower-tesla.png", NULL);
    all->twr->txture[9] = sfTexture_createFromFile
        ("pictures/map/eplcmnt1.png", NULL);
    all->twr->txture[10] = sfTexture_createFromFile
        ("pictures/tower/range.png", NULL);
    all->twr->txture[11] = sfTexture_createFromFile
        ("pictures/tower/ball.png", NULL);
    all->twr->txture[12] = sfTexture_createFromFile
        ("pictures/tower/fire_ball.png", NULL);
}

void my_struct_tower3(all_t *all, sfRenderWindow *window)
{
    all->twr->txture[13] = sfTexture_createFromFile
        ("pictures/tower/ice_pick.png", NULL);
    all->twr->txture[14] = sfTexture_createFromFile
        ("pictures/tower/thunder_ball.png", NULL);
}
