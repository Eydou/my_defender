/*
** EPITECH PROJECT, 2019
** my_src.h
** File description:
** all library for the game.
*/

#ifndef my_src_h
#define my_src_h

#include "my_struct.h"

    /* src */

void my_handler_enm(all_t *all, sfRenderWindow *window);
void my_intro(all_t *all, sfRenderWindow *window);
int drw_intro(all_t *all, sfRenderWindow *window);
void move_rect_intro(all_t *all, sfIntRect rect, int offset, int max);
sfIntRect rect_intro(all_t *all, int left, int width, int height);
void music_game_over(all_t *all);
int my_castle_life(all_t *all, sfRenderWindow *window);
char *my_realloc(char *s);
void press_btn_game_over(all_t *all, sfRenderWindow *window, sfEvent event);
int end_of_the_game(all_t *all, sfRenderWindow *window);
void draw_game_over(all_t *all, sfRenderWindow *window);
void big_resume2(all_t *all, sfRenderWindow *window, sfEvent event,
sfVector2i mouse_pos);
void resume2(all_t *all, sfRenderWindow *window, sfEvent event,
sfVector2i mouse_pos);
void big_return(all_t *all, sfRenderWindow *window, sfEvent event);
void my_help(void);
void music_game(all_t *all);
void music_menu(all_t *all);

    /* enemies */

void draw_enemies(all_t *all, sfRenderWindow *window);
void my_malloc_time(all_t *all);
sfIntRect rect_enm5(all_t *all, int left, int width, int height);
sfIntRect rect_enm6(all_t *all, int left, int width, int height);
sfIntRect rect_enm7(all_t *all, int left, int width, int height);
sfIntRect rect_enm8(all_t *all, int left, int width, int height);
sfIntRect rect_enm9(all_t *all, int left, int width, int height);
sfIntRect rect_enm10(all_t *all, int left, int width, int height);
sfIntRect rect_enm11(all_t *all, int left, int width, int height);
sfIntRect rect_enm12(all_t *all, int left, int width, int height);
void setup_my_assasin(all_t *all, sfRenderWindow *window);
sfIntRect rect_enm4(all_t *all, int left, int width, int height);
void move_rect_enm4(all_t *all, sfIntRect rect, int offset, int max);
sfIntRect rect_enm(all_t *all, int left, int width, int height);
sfIntRect rect_enm2(all_t *all, int left, int width, int height);
sfVector2f vect_create_enm(int x, int y);
void my_devil(all_t *all, sfRenderWindow *window);
void my_knight(all_t *all, sfRenderWindow *window);
int my_move_enm(all_t *all);
int my_move_devil(all_t *all);
int my_move_knight(all_t *all);
void move_sprite_enm(all_t *all, int x, int y);
void move_sprite_devil(all_t *all, int x, int y);
void move_sprite_knight(all_t *all, int x, int y);
sfVector2f vect_create_enm(int x, int y);
void move_rect_enm3(all_t *all, sfIntRect rect, int offset, int max);
sfIntRect rect_enm2(all_t *all, int left, int width, int height);
sfIntRect rect_enm3(all_t *all, int left, int width, int height);
sfIntRect rect_enm4(all_t *all, int left, int width, int height);
void my_malloc_enm(all_t *all);
void my_enemies(all_t *all, sfRenderWindow *window);
void move_rect_enm(all_t *all, sfIntRect rect, int offset, int max);
void move_rect_enm2(all_t *all, sfIntRect rect, int offset, int max);
void move_rect_enm5(all_t *all, sfIntRect rect, int offset, int max);
void move_rect_enm6(all_t *all, sfIntRect rect, int offset, int max);
void move_rect_enm7(all_t *all, sfIntRect rect, int offset, int max);
void move_rect_enm8(all_t *all, sfIntRect rect, int offset, int max);
void move_rect_enm9(all_t *all, sfIntRect rect, int offset, int max);
void move_rect_enm10(all_t *all, sfIntRect rect, int offset, int max);
void move_rect_enm11(all_t *all, sfIntRect rect, int offset, int max);
void move_rect_enm12(all_t *all, sfIntRect rect, int offset, int max);
sfVector2f vect_create_enm(int x, int y);

      /* game */

void my_over(all_t *all, sfRenderWindow *window);
sfIntRect rect_over(all_t *all, int left, int width, int height);
int my_gameloop_start(all_t *all, sfRenderWindow *window);
int my_castle_life(all_t *all, sfRenderWindow *window);
void my_struct_castle(all_t *all, sfRenderWindow *window);
void my_game(all_t *all, sfRenderWindow *window);
int my_gameloop(all_t *all, sfRenderWindow *window);
void my_setup_struct_game(all_t *all, sfRenderWindow *window);
void my_setup_struct_game3(all_t *all, sfRenderWindow *window);

    /* tower */

void thunder_tower_shoot_devil(all_t *all, sfRenderWindow *window);
void ice_tower_shoot_devil(all_t *all, sfRenderWindow *window);
void fire_tower_shoot_devil(all_t *all, sfRenderWindow *window);
void canon_tower_shoot_devil(all_t *all, sfRenderWindow *window);
void thunder_tower_shoot_knight(all_t *all, sfRenderWindow *window);
void ice_tower_shoot_knight(all_t *all, sfRenderWindow *window);
void fire_tower_shoot_knight(all_t *all, sfRenderWindow *window);
void canon_tower_shoot_knight(all_t *all, sfRenderWindow *window);
void thunder_tower_shoot_assassin(all_t *all, sfRenderWindow *window);
void ice_tower_shoot_assassin(all_t *all, sfRenderWindow *window);
void fire_tower_shoot_assassin(all_t *all, sfRenderWindow *window);
void canon_tower_shoot_assassin(all_t *all, sfRenderWindow *window);
void grab_tower(all_t *all, sfRenderWindow *window, sfEvent event,
sfVector2i m_p);
void grab_thunder_tower2(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i m_p);
void grab_ice_tower2(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos);
void grab_fire_tower2(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos);
void grab_canon_tower2(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos);
void check_square_canon(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos);
void check_square_fire(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos);
void check_square_ice(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos);
void check_square_thunder(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos);
void vector_square(all_t *all);
void vector_square2(all_t *all);
void vector_square3(all_t *all);
void vector_square4(all_t *all);
void big_resume(all_t *all, sfRenderWindow *window, sfEvent event);
void big_button_menu(all_t *all, sfRenderWindow *window, sfEvent event);
void resume(all_t *all, sfRenderWindow *window, sfEvent event);
void my_struct_menu2(all_t *all, sfRenderWindow *window);
void my_struct_tower2(all_t *all, sfRenderWindow *window);
void draw_tower_tree(all_t *all, sfRenderWindow *window);
void cursor(all_t *all, sfRenderWindow *window, sfEvent event,
sfVector2i mouse_pos);
void draw_start(all_t *all, sfRenderWindow *window);
void prs_start(all_t *all, sfRenderWindow *window, sfEvent event);
void grab_thunder_tower(all_t *all, sfRenderWindow *window,
sfEvent event, sfVector2i mouse_pos);
void grab_ice_tower(all_t *all, sfRenderWindow *window, sfEvent event,
sfVector2i mouse_pos);
void grab_fire_tower(all_t *all, sfRenderWindow *window, sfEvent event,
sfVector2i mouse_pos);
void grab_canon_tower(all_t *all, sfRenderWindow *window, sfEvent event,
sfVector2i mouse_pos);
void draw_tower(all_t *all, sfRenderWindow *window);
void prs_tower_tree2(all_t *all, sfRenderWindow *window, sfEvent event,
sfVector2i mouse_pos);
void prs_tower_tree(all_t *all, sfRenderWindow *window, sfEvent event);
void vector_tower(all_t *all);
void vector_tree_tower(all_t *all);
void vector_tower2(all_t *all);

    /* event */

void my_setup_event_type(all_t *all, sfRenderWindow *window, sfEvent event);
void drw_game(all_t *all, sfRenderWindow *window);
void draw_start2(all_t *all, sfRenderWindow *window);
void vector_game(all_t *all);
void prs_btn_menu2(all_t *all, sfRenderWindow *window, sfEvent event,
sfVector2i mouse_pos);
void drw_htp(all_t *all, sfRenderWindow *window);
void prs_btn_htp(all_t *all, sfRenderWindow *window, sfEvent event);
void prs_btn_menu(all_t *all, sfRenderWindow *window, sfEvent event);
void prs_btn(all_t *all, sfRenderWindow *window, sfEvent event);
void drw_menu(all_t *all, sfRenderWindow *window);
int my_start_game(all_t *all, sfRenderWindow *window);
void my_struct_menu(all_t *all, sfRenderWindow *window);
void vector_menu(all_t *all);
void my_struct_music(all_t *all, sfRenderWindow *window);
void my_struct_game2(all_t *all, sfRenderWindow *window);
void my_struct_tower3(all_t *all, sfRenderWindow *window);
all_t *my_struct_all(all_t *all, sfRenderWindow *window);
void my_struct_tower(all_t *all, sfRenderWindow *window);
void my_struct_enm(all_t *all, sfRenderWindow *window);
void my_struct_castle(all_t *all, sfRenderWindow *window);
all_t **my_malloc_game(all_t **all, sfRenderWindow *window);
void my_event_type(all_t *all, sfRenderWindow *window);

    /* lib */

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_put_nbr(int nb);
int my_atoi(char const *str);
char *my_itoa(int nb);

#endif /* my_src.h */
