/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** flags_pn.c
*/
#include <stdarg.h>
#include "my.h"

// %p: displays a pointer's address
int my_res_size(unsigned long nbr)
{
    int i = 0;

    while (nbr > 0){
        nbr = (nbr - nbr % 16) / 16;
        i++;
    }
    return i;
}

int df_p(va_list list)
{
    unsigned long nbr = va_arg(list, unsigned long);
    char* base = "0123456789abcdef";
    int res_size = my_res_size(nbr);
    char result[res_size];
    int i = res_size - 1;

    result[res_size] = '\0';
    while (nbr > 0){
        result[i] = base[nbr % 16];
        nbr = (nbr - nbr % 16) / 16;
        i--;
    }
    my_putchar('0');
    my_putchar('x');
    for (int i = 0; result[i]; i++) my_putchar(result[i]);
    return res_size + 2;
}
