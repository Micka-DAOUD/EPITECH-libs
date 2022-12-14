/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** flags_bigr.c
*/

#include <stdarg.h>
#include <unistd.h>

int df_bigr(va_list list)
{
    char* str = va_arg(list, char*);
    int i = 0;

    for (; str[i]; i++)
        write(2, &str[i], 1);
    return i;
}
