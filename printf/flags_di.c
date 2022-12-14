/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** flags_di.c
*/
#include "my.h"
#include <stdarg.h>

// %d, %i: displays a signed int
int df_di(va_list list)
{
    return my_put_nbr(va_arg(list, int));
}
