/*
** EPITECH PROJECT, 2022
** my_strlowcase
** File description:
** strlowcase
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i]){
        if (64 < str[i] && str[i] < 91)
            str[i] += 32;
        i++;
    }
    return str;
}
