/*
** EPITECH PROJECT, 2019
** my_itoa.c
** File description:
** my_itoa.c
*/

#include "../../include/my_src.h"

void my_swap(char *x, char *y)
{
    char i = *x;
    *x = *y;
    *y = i;
}

char *my_reverse(char *result, int i, int j)
{
    while (i < j)
        my_swap(&result[i++], &result[j--]);
    return (result);
}

char *my_memset(char *b, int c, int len)
{
    for (int i = 0; i != len; i++)
        b[i] = c;
    return (b);
}

char *my_itoa(int nb)
{
    int i = 0;
    char *result = malloc(sizeof(char) + 4);
    result = my_memset(result, '\0', 4);

    while (nb) {
        int r = nb % 10;
        if (r >= 10)
            result[i++] = 65 + (r - 10);
        else
            result[i++] = 48 + r;
        nb = nb / 10;
    }
    result = my_reverse(result, 0, i - 1);
    return (result);
}
