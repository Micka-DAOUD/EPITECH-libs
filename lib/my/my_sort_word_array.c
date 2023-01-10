/*
** EPITECH PROJECT, 2022
** my_sort_word_array
** File description:
** name!
*/

#include "my.h"

int comparer_str(char *stra, char *strb, int n)
{
    while (stra[n] && strb[n]){
        if (stra[n] < strb[n])
            return (0);
        if (stra[n] > strb[n])
            return (1);
        return (comparer_str(stra, strb, n + 1));
    }
    if (stra[n])
        return (1);
    if (strb[n])
        return (0);
    return (2);
}

int my_sort_word_array(char **tab)
{
    int x = 0;
    char *strtemp;
    char* tabx;
    char* tabx1;
    int comp;

    while (x < my_strtab_len(tab) - 1){
        tabx = my_strdup(tab[x]);
        tabx1 = my_strdup(tab[x + 1]);
        comp = comparer_str(my_strlowcase(tabx), my_strlowcase(tabx1), 0);
        if (comp == 0 || comp == 2)
            x ++;
        if (comp == 1){
            strtemp = tab[x];
            tab[x] = tab[x + 1];
            tab[x + 1] = strtemp;
            x = 0;
        }
    }
    return (0);
}
