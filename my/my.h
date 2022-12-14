/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** header
*/
#ifndef MY_H_
    #define MY_H_
    #define ABS(value) ((value) < 0) ? - (value) : (value)
    #define SIGN(value) ((value) < 0) ? '-' : '+'

long long my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int nb);
int my_nbrlen(long long nb);
int my_put_nbr(long long nb);
void my_putchar(char c);
int my_putnbr_base(int nbr, char const *base);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_rev_word_array(char **tab);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_sort_word_array(char **tab);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char **my_str_to_word_array(char const *str, char sep);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *str);
int my_strlen(char const *str);
int my_arrlen(char **arr);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strncpy(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strstr(char *str, char const *to_find);
int my_strtab_len(char **tab);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);

#endif /* MY_H_ */
