/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** mini_printf.c
*/

#include <stdarg.h>
#include "printf.h"
#include "my.h"

int display(va_list list, char c)
{
    int (*tab[21])(va_list) = {

            df_di, df_di, df_c, df_s, df_b, df_o, df_u,
            df_x, df_bigx, df_e, df_bige, df_f, df_bigf,
            df_g, df_bigg, df_a, df_biga, df_p, df_bigs, df_bigr, df_t
    };
    char flags[] = "dicsbouxXeEfFgGaApSRt";
    if (c == 'n')
        return 0;
    if (c == '%') {
        my_putchar(c);
        return 1;
    }
    for (int i = 0; flags[i]; i++){
        if (flags[i] == c) {
            return tab[i](list);
        }
    }
    return 84;
}

int my_printf(const char *format, ...)
{
    int length = 0;
    va_list list;

    va_start(list, format);
    for (int i = 0; format[i]; i++){
        if (format[i] == '%' && format[i + 1] == 'n')
            *va_arg(list, int*) = length;
        if (format[i] == '%'){
            length += display(list, format[i + 1]);
            i++;
        } else {
            my_putchar(format[i]);
            length++;
        }
    }
    va_end(list);
    return length;
}
