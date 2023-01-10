/*
** EPITECH PROJECT, 2022
** my_compute_square_root
** File description:
** computes square root
*/

int my_compute_square_root(int nb)
{
    int root = 0;

    while (root <= nb){
        if (root * root == nb){
            return (root);
        }
        root ++;
    }
    return (0);
}
