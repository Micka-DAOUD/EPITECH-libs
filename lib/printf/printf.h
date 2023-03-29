/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** printf.h
*/
#ifndef PRINTF_H_
    #define PRINTF_H_
    #include <stdarg.h>
    #include <unistd.h>
    #define ABS(value) ((value) < 0) ? - (value) : (value)

int my_put_nbr(long long nb);
long long my_pow(int nb, int p);
int my_strlen(char const *str);
int my_arrlen(char **arr);
int my_printf(const char *format, ...);
int my_put_float(double nb, int pre);
int my_put_sci(double db, int prec, int is_upper);
int my_put_uint_base(unsigned int nb, char const *base);
int df_f(va_list list);
int df_bigs(va_list list);
int df_x(va_list list);
int df_c(va_list list);
int df_s(va_list list);
int df_di(va_list list);
int df_p(va_list list);
int df_bigr(va_list list);
int df_t(va_list list);

#endif /* PRINTF_H_ */
