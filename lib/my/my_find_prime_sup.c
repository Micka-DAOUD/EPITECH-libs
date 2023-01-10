/*
** EPITECH PROJECT, 2022
** my_find_prime_sup
** File description:
** finds prime sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int i = nb;

    while (i < 2147483647){
        if (my_is_prime(i) == 1){
            return (i);
        }
        i ++;
    }
    return (0);
}
