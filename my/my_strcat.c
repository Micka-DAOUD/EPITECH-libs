/*
** EPITECH PROJECT, 2022
** strcat
** File description:
** strcat
*/
int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int idest = my_strlen(dest);
    int isrc = 0;

    while (src[isrc]){
        dest[idest + isrc] = src[isrc];
        isrc++;
    }
    dest[idest + isrc] = '\0';
    return (dest);
}
