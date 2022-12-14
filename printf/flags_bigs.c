/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** flags_bigs.c
*/
#include "my.h"
#include <stdarg.h>

void display_oct(char esc_seq, char* base)
{
    int n1 = esc_seq % 8;

    my_putchar('\\');
    esc_seq = (esc_seq - esc_seq % 8) / 8;
    int n2 = esc_seq % 8;
    esc_seq = (esc_seq - esc_seq % 8) / 8;
    int n3 = esc_seq % 8;
    my_putchar(base[n3]);
    my_putchar(base[n2]);
    my_putchar(base[n1]);
}

int df_bigs(va_list list)
{
    char* str = va_arg(list, char*);
    int len = 0;

    for (int i = 0; str[i]; i++){
        if (str[i] < 32 || str[i] >= 127) {
            display_oct(str[i], "01234567");
            len += 3;
        }
        if (!(str[i] < 32 || str[i] >= 127))
            my_putchar(str[i]);
        len++;
    }
    return len;
}
