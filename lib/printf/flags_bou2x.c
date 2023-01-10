/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** flags_bouxX.c
*/
#include <stdarg.h>
#include "printf.h"

// %b: displays in binary base
int df_b(va_list list)
{
    int nb = va_arg(list, unsigned int);

    return (my_put_uint_base(nb, "01"));
}

int df_o(va_list list)
{
    int nb = va_arg(list, unsigned int);

    return (my_put_uint_base(nb, "01234567"));
}

int df_u(va_list list)
{
    int nb = va_arg(list, unsigned int);

    return (my_put_uint_base(nb, "0123456789"));
}

int df_x(va_list list)
{
    int nb = va_arg(list, unsigned int);

    return (my_put_uint_base(nb, "0123456789abcdef"));
}

int df_bigx(va_list list)
{
    int nb = va_arg(list, unsigned int);

    return (my_put_uint_base(nb, "0123456789ABCDEF"));
}
