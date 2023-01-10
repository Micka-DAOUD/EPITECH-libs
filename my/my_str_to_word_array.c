/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** it's in the name
*/

#include <stdlib.h>

int count_cols(const char* str, int j, char sep)
{
    int nb_cols = 0;

    for (; str[j]; j ++){
        if (str[j] != sep)
            nb_cols++;
        else {
            return nb_cols;
        }
    }
    return nb_cols;
}

void put_letters(const char* str, char* word, int i, char sep)
{
    int j = 0;

    for (; str[i]; i++) {
        if (str[i] != sep) {
            word[j] = str[i];
            j++;
        } else
            return;
    }
}

int count_rows(char const* str, char sep)
{
    int nb_rows = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == sep || (!str[i + 1] && str[i] != sep))
            nb_rows++;
    }
    return nb_rows;
}

char** my_str_to_word_array(char* str, char sep)
{
    int nb_rows = count_rows(str, sep);
    int nb_cols;
    int j = 0;
    char* word;
    char ** arr;

    arr = malloc(sizeof(char*) * (nb_rows + 1));
    arr[nb_rows] = NULL;
    for (int i = 0; str[i]; i++){
        if (str[i - 1] == sep || i == 0) {
            nb_cols = count_cols(str, i, sep);
            word = malloc(sizeof(char) * (nb_cols + 1));
            word[nb_cols] = '\0';
            arr[j] = word;
            put_letters(str, arr[j], i, sep);
            j++;
        }
    }
    return arr;
}
