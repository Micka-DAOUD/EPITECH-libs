/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** my_str_islower.c
*/

int my_str_islower(char const *str)
{
    for (int i = 0; str[i]; i++){
        if (!('a' <= str[i] && str[i] <= 'z'))
            return 0;
    }
    return 1;
}
