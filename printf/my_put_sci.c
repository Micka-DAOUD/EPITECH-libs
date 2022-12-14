/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** my_put_sci.c
*/

#include "my.h"
#include "printf.h"

int get_exp(double db)
{
    int exp = 0;

    db = ABS(db);
    if (db == 0)
        return 0;
    while (db < 1){
        db *= 10;
        exp --;
    }
    while (db >= 10){
        db /= 10;
        exp ++;
    }
    return exp;
}

int disp_exp(int exp, int is_upper)
{
    int size = 0;

    if (is_upper == 1)
        my_putchar('E');
    else
        my_putchar('e');
    my_putchar(SIGN(exp));
    size += my_put_nbr(ABS((exp - exp % 10) / 10));
    size += my_put_nbr(ABS(exp % 10));
    return size + 2;
}

int disp_float(double db, int prec)
{
    int size = 0;

    if (db < 0) {
        size++;
        my_putchar('-');
    }
    db = ABS(db);
    while (db < 1)
        db *= 10;
    while (db >= 10)
        db /= 10;
    return size + my_put_float(db, prec);
}

int my_put_sci(double db, int prec, int is_upper)
{
    int size = 0;
    int exp = get_exp(db);

    if (db == 0)
        size += my_put_float(0, prec);
    if (my_nbrlen(ABS(db)) == 1 && (int)db != 0)
        size += my_put_float(db, prec);
    else if (db != 0)
        size += disp_float(db, prec);
    size += disp_exp(exp, is_upper);
    return size;
}
