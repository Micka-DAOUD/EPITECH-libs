/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** strlen
*/

int my_strlen(char const *str)
{
    int len = 0;

    while (str[len]) len++;
    return (len);
}

int my_arrlen(char **arr)
{
    int len = 0;

    while (arr[len]) len++;
    return (len);
}
