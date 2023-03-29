/*
** EPITECH PROJECT, 2022
** mdi
** File description:
** Illan MASTEY
*/

#include "printf.h"

int my_put_dec(double dec, int pre)
{
    int res = 0;
    long long pow = my_pow(10, pre);

    dec = ABS(dec);
    dec -= (long long)dec;
    long long nb = dec * pow * 10;
    nb = nb % (pow * 10);
    if (nb % 10 >= 5)
        nb += 10;
    for (int i = 0; i < pre; i++){
        my_put_nbr((nb - nb % pow) / pow);
        res ++;
        nb %= pow;
        pow /= 10;
    }
    return res;
}

int my_put_float(double nb, int pre)
{
    int res = my_put_nbr(nb);

    write(1, ".", 1);
    return res + 1 + my_put_dec(nb, pre);
}
