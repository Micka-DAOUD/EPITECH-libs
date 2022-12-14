/*
** EPITECH PROJECT, 2022
** my_swap
** File description:
** swaps the content of 2 ingtegers
*/

void my_swap(int *a, int *b)
{
    int temp = *b;

    *b = *a;
    *a = temp;
}
