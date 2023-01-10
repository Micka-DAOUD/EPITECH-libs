/*
** EPITECH PROJECT, 2022
** created by Micka DAOUD
** File description:
** my_str_isnum.c
*/

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i]; i++){
        if (!('0' <= str[i] && str[i] <= '9'))
            return 0;
    }
    return 1;
}
