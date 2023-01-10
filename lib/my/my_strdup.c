/*
** EPITECH PROJECT, 2022
** my_strdup
** File description:
** strdup
*/
#include <stdlib.h>

char *my_strdup(char const *str)
{
    int len = 0;
    char *duped_str;
    int i = 0;

    while (str[len]) len++;
    duped_str = malloc(sizeof(char) * (len + 1));
    while (str[i]){
        duped_str[i] = str[i];
        i ++;
    }
    duped_str[i] = '\0';
    return (duped_str);
}
