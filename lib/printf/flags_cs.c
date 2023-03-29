/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** flags_cs.c
*/

#include "printf.h"

int df_c(va_list list)
{
    char c = va_arg(list, int);

    write(1, &c, 1);
    return 1;
}

int df_s(va_list list)
{
    int len = 0;
    char* str = va_arg(list, char*);

    for (; str[len]; len++)
        write(1, &str[len], 1);
    return len;
}
