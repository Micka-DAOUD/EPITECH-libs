/*
** EPITECH PROJECT, 2023
** Created by Micka DAOUD
** File description:
** is_in.c
*/

int is_in(char c, char* str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] == c)
            return 1;
    }
    return 0;
}
