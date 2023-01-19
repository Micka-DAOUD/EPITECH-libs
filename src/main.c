/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** main.c
*/

#include "../includes/includes.h"

int main(int ac, char** av)
{
    if (ac == 1)
        my_printf("%s => Hello world!", av[0]);
    return 0;
}
