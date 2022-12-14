/*
** EPITECH PROJECT, 2022
** Created by Micka DAOUD
** File description:
** printf.h
*/
#ifndef PRINTF_H_
    #define PRINTF_H_
    #include <stdarg.h>

int my_printf(const char *format, ...);
int my_put_float(double nb, int pre);
int my_put_sci(double db, int prec, int is_upper);
int my_put_uint_base(unsigned int nb, char const *base);
int df_a(va_list list);
int df_biga(va_list list);
int df_e(va_list list);
int df_bige(va_list list);
int df_f(va_list list);
int df_bigf(va_list list);
int df_g(va_list list);
int df_bigg(va_list list);
int df_bigs(va_list list);
int df_b(va_list list);
int df_o(va_list list);
int df_u(va_list list);
int df_x(va_list list);
int df_bigx(va_list list);
int df_c(va_list list);
int df_s(va_list list);
int df_di(va_list list);
int df_p(va_list list);
int df_bigr(va_list list);

#endif /* PRINTF_H_ */
