/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** my_nbrlen.c
*/

int my_nbrlen(long long nb)
{
    int i = 0;

    if (nb == 0)
        return 1;
    if (nb < 0){
        i++;
        nb *= -1;
    }
    while (nb > 0){
        nb /= 10;
        i++;
    }
    return i;
}
