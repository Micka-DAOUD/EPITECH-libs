/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** my_str_isupper.c
*/

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i]; i++){
        if (!('A' <= str[i] && str[i] <= 'Z'))
            return 0;
    }
    return 1;
}
