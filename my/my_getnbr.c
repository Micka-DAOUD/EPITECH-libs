/*
** EPITECH PROJECT, 2022
** my_getnbg
** File description:
** getnbr
*/

int my_getnbr(char const *str)
{
    int sign = 1;
    int res = 0;
    int i = 0;
    int len = 0;

    for (; str[i] && (str[i] < '1' || str[i] > '9'); i++){
        if (str[i] == '-')
            sign *= -1;
    }
    while (str[i] >= '0' && str[i] <= '9'){
        if (len > 10 || res > 214748364 || str[i] - 48 > 7 && res == 214748364)
            return 0;
        if (str[i + 1] >= '0' && str[i + 1] <= '9')
            res = (res + str[i] - 48) * 10;
        else
            res += str[i] - 48;
        i++;
        len++;
    }
    return (res * sign);
}
