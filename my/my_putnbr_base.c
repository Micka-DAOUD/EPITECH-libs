/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** my_putnbr_base.c (DOESNT HANDLE NEGATIVE NUMBERS)
*/
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int my_res_size(int nbr,int nbase)
{
    int i = 0;

    while (nbr > 0){
        nbr = (nbr - nbr % nbase) / nbase;
        i++;
    }
    return i;
}

int my_putnbr_base(int nbr, char const *base)
{
    int nbase = my_strlen(base);
    int res_size = my_res_size(nbr, nbase);
    int i = res_size - 1;
    char* result = malloc(res_size + 1);

    result[res_size] = '\0';
    while (nbr > 0){
        result[i] = base[nbr % nbase];
        nbr = (nbr - nbr % nbase) / nbase;
        i--;
    }
    for (int i = 0; result[i]; i++) write(1, &result[i], 1);
    return 0;
}
