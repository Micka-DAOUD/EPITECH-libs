/*
** EPITECH PROJECT, 2022
** my_compute_power_rec
** File description:
** recursive factorial function
*/

long long my_pow(int nb, int p)
{
    long long res;

    if (p == 0){
        return (1);
    }
    if (p < 0){
        return (0);
    }
    res = nb * my_pow(nb, p - 1);
    return (res);
}
