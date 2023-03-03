/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** freearr.c
*/
#include <stdlib.h>

void freearr(char** arr)
{
    if (!arr)
        return;
    for (int i = 0; arr[i] != NULL; i++)
        free(arr[i]);
    free(arr);
}
