/*
** EPITECH PROJECT, 2022
** my_sort_int_array
** File description:
** sorts an in array
*/

void my_sort_int_array(int *tab, int size)
{
    int i = 0;
    int temp;

    while (tab[i + 1]){
        if (tab[i] > tab[i + 1]){
            temp = tab[i + 1];
            tab[i + 1] = tab[i];
            tab[i] = temp;
            i = 0;
        }
        i++;
    }
    return;
}
