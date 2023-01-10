/*
** EPITECH PROJECT, 2022
** my_isneg
** File description:
** prints if parameter is positive or not
*/
void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0){
        my_putchar(80);
    } else {
        my_putchar(78);
    }
    my_putchar('\n');
    return (0);
}
