/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** my_str_isprintable.c
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i]; i++){
        if (!(32 <= str[i] && str[i] <= 126))
            return 0;
    }
    return 1;
}
