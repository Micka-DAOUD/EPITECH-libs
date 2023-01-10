/*
** EPITECH PROJECT, 2022
** my_strcapitalize
** File description:
** strcapitalize
*/
char *capitalize(char *str, int i)
{
    if (i == 0 || str[i - 1] == 32 || str[i - 1] == 45 || str[i - 1] == 43)
        str[i] -= 32;
    return (str);
}

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i]){
        if ('A' <= str[i] && str[i] <= 'Z')
            str[i] += 32;
        if ('a' <= str[i] && str[i] <= 'z')
            capitalize(str, i);
        i++;
    }
    return (str);
}
