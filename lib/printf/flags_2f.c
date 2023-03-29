/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** flags_fF.c
*/
#include "printf.h"

int df_f(va_list list)
{
    double db = va_arg(list, double);

    return my_put_float(db, 6);
}
