/*
** EPITECH PROJECT, 2017
** my.h
** File description:
*/

#include <stdarg.h>

#ifndef MY_H_
#define MY_H_

int my_putstr(char const *str);
int my_put_nbr(int nb);
void number(int nb, char *str);
int decimal_nbr(char *str);
char *my_revstr(char *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_printf(char *string, ...);
int func_s(va_list *ap);
int func_d(va_list *ap);
int func_c(va_list *ap);

#endif /* MY_H */
