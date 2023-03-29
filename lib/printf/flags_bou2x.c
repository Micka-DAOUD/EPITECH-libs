/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** flags_bouxX.c
*/

#include "printf.h"

int df_x(va_list list)
{
    int nb = va_arg(list, unsigned int);

    return (my_put_uint_base(nb, "0123456789abcdef"));
}
