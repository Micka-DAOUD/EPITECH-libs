/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** reverses a string
*/

char *my_revstr(char *str)
{
    char temp;
    int len = 0;
    int i = 0;

    while (str[len]) len++;
    while (str[i] && i < len / 2){
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
        i++;
    }
    return (str);
}
