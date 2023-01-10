/*
** EPITECH PROJECT, 2022
** my_strncat
** File description:
** strncat
*/
int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int idest = my_strlen(dest);
    int isrc = 0;

    while (src[isrc] && isrc < nb){
        dest[idest + isrc] = src[isrc];
        isrc++;
    }
    dest[idest + isrc] = '\0';
    return (dest);
}
