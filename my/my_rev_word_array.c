/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** my_rev_array.c
*/
#include "my.h"

int my_rev_word_array(char **tab)
{
    char *strtemp;
    int len = my_strtab_len(tab) - 1;

    for (int i = 0; i <= len / 2; i++) {
        strtemp = tab[i];
        tab[i] = tab[len - i];
        tab[len - i] = strtemp;
    }
    return 0;
}
