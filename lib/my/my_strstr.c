/*
** EPITECH PROJECT, 2022
** my_strstr
** File description:
** returns the adress of a substring
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int len_j = 0;
    int returned_i = 0;

    while (to_find[len_j]) len_j ++;
    while (str[i]){
        if (str[i] == to_find[j])
            returned_i = i;
        while (str[i] == to_find[j]){
            i++;
            j++;
        }
        if (j == len_j)
            return (&str[returned_i]);
        j = 0;
        i++;
    }
    return ("\0");
}
