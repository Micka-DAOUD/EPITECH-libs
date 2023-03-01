/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** it's in the name
*/

#include <stdlib.h>

int is_sep(char c, char* seplist)
{
    for (int i = 0; seplist[i]; i++) {
        if (seplist[i] == c)
            return 1;
    }
    return 0;
}

int count_cols(const char* str, int j, char* seps)
{
    int nb_cols = 0;

    for (; str[j]; j++){
        if (is_sep(str[j], seps))
            return nb_cols;
        nb_cols ++;
    }
    return nb_cols;
}

void put_letters(const char* str, char* word, int i, char* seps)
{
    int j = 0;

    for (; str[i]; i++) {
        if (!is_sep(str[i], seps)) {
            word[j] = str[i];
            j++;
        } else
            return;
    }
}

int count_rows(char const* str, char* seps)
{
    int nb_rows = 0;

    for (int i = 1; str[i]; i++) {
        if ((is_sep(str[i], seps) && !is_sep(str[i - 1], seps)) ||
            (!str[i + 1] && !is_sep(str[i], seps)))
            nb_rows++;
    }
    return nb_rows;
}

char** my_str_to_word_array(char* str, char* seps)
{
    int nb_rows = count_rows(str, seps);
    int nb_cols;
    int temp_i;
    int j = 0;
    char ** arr = malloc(sizeof(char*) * (nb_rows + 1));

    arr[nb_rows] = NULL;
    for (int i = 0; str[i]; i++){
        if ((is_sep(str[i], seps) && str[i + 1] && !is_sep(str[i + 1], seps)) ||
            (i == 0 && !is_sep(str[i], seps))){
            temp_i = (i == 0 && !is_sep(str[i], seps)) ? i : i + 1;
            nb_cols = count_cols(str, temp_i, seps);
            arr[j] = malloc(sizeof(char) * (nb_cols + 1));
            arr[j][nb_cols] = '\0';
            put_letters(str, arr[j], temp_i, seps);
            j++;
        }
    }
    return arr;
}
