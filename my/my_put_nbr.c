/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** prints number
*/

#include "my.h"

int my_put_nbr(long long nb)
{
    long long nb_chiffres = my_nbrlen(nb);
    long long ord_gra = my_compute_power_rec(10, my_nbrlen(ABS(nb)) - 1);
    long long dernier_chiffre;

    if (nb < 0 && nb >= -9223372036854775807) {
        my_putchar(45);
        nb = ABS(nb);
    }
    while (ord_gra >= 1){
        dernier_chiffre = nb - (nb % ord_gra);
        my_putchar(dernier_chiffre / ord_gra + '0');
        nb %= ord_gra;
        ord_gra /= 10;
    }
    return nb_chiffres;
}
