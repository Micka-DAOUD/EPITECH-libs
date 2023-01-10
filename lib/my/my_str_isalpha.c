/*
** EPITECH PROJECT, 2022
** my_str_isalpha.c, created by Micka DAOUD
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (!('a' <= str[i] && str[i] <= 'z') &&
        !('A' <= str[i] && str[i] <= 'Z'))
            return 0;
    }
    return 1;
}
