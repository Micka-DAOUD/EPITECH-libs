/*
** EPITECH PROJECT, 2022
** my_strupcase
** File description:
** strupcase
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i]){
        if (96 < str[i] && str[i] < 123)
            str[i] -= 32;
        i++;
    }
    return str;
}
