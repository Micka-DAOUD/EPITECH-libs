/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** mini_printf.c
*/

#include "printf.h"

int display(va_list list, char c)
{
    int (*tab[9])(va_list) = {
                df_di, df_c, df_s, df_x, df_f, df_p, df_bigs, df_bigr, df_t
    };
    char flags[] = "dcsxfpSRt";
    if (c == 'n')
        return 0;
    if (c == '%') {
        write(1, &c, 1);
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
            write(1, &format[i], 1);
            length++;
        }
    }
    va_end(list);
    return length;
}
