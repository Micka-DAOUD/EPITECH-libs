/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** my_strtab_len.c
*/

int my_strtab_len(char **tab)
{
    int len = 0;

    while (tab[len]) len++;
    return len;
}
