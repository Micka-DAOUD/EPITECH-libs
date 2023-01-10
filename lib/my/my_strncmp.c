/*
** EPITECH PROJECT, 2022
** mystrncmp
** File description:
** reproduce the behavior of strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] && s2[i] && i < n){
        if (s1[i] != s2[i]){
            return (s1[i] - s2[i]);
        }
        i ++;
    }
    if (s1[i] && !s2[i] && i < n)
        return (s1[i]);
    if (s2[i] && !s1[i] && i < n)
        return (-s2[i]);
    return (s1[i] - s2[i]);
}
