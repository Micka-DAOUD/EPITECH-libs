/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** flags_eE.c
*/
#include <stdarg.h>
#include "printf.h"

int df_e(va_list list)
{
    double db = va_arg(list, double);

    return my_put_sci(db, 6, 0);
}

int df_bige(va_list list)
{
    double db = va_arg(list, double);

    return my_put_sci(db, 6, 1);
}
