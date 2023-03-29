/*
** EPITECH PROJECT, 2022
** Created by Illan MASTEY
** File description:
** my_put_unbr_base.c
*/

#include "printf.h"

int my_size_result(unsigned int nb, int nbase)
{
    int a = 0;

    if (nb == 0)
        return 1;
    while (nb > 0){
        nb = (nb - nb % nbase) / nbase;
        a++;
    }
    return a;
}

int my_put_uint_base(unsigned int nb, char const *base)
{
    int nbase = my_strlen(base);
    int size_result = my_size_result(nb, nbase);
    char result[size_result + 1];
    int i = size_result - 1;

    if (nb == 0){
        my_put_nbr(0);
        return 1;
    }
    result[size_result] = '\0';
    while (nb > 0){
        result[i] = base[nb % nbase];
        nb = (nb - nb % nbase) / nbase;
        i--;
    }
    for (int i = 0; result[i]; i++)
        write(1, &result[i], 1);
    return 0;
}
