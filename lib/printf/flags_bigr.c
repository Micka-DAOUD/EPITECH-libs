/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** flags_bigr.c
*/

#include "printf.h"

int df_bigr(va_list list)
{
    char* str = va_arg(list, char*);
    int i = 0;

    for (; str[i]; i++)
        write(2, &str[i], 1);
    return i;
}

int df_t(va_list list)
{
    char** arr = va_arg(list, char**);

    for (int i = 0; arr[i]; i++) {
        for (int j = 0; arr[i][j]; j++)
            write(1, &arr[i][j], 1);
        write(1, "\n", 1);
    }
    return my_arrlen(arr);
}
