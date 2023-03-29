/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** header
*/
#ifndef MY_H_
    #include <unistd.h>
    #define MY_H_
    #define ABS(value) ((value) < 0) ? - (value) : (value)
    #define SIGN(value) ((value) < 0) ? '-' : '+'

void freearr(char** arr);
int is_in(char c, char* str);
char** my_arrdup(char** arr);
long long my_pow(int nb, int p);
int my_atoi(char const *str);
int my_nbrlen(long long nb);
int my_put_nbr(long long nb);
char **my_str_to_word_array(char const *str, char* seps);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *str);
int my_strlen(char const *str);
int my_arrlen(char **arr);
int my_strncmp(char const *s1, char const *s2, int n);

#endif /* MY_H_ */
