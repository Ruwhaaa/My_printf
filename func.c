/*
** EPITECH PROJECT, 2018
** func.c
** File description:
** func
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

int func_s(va_list *ap)
{
	my_putstr(va_arg(*ap, char *));
	return (0);
}

int func_d(va_list *ap)
{
	my_put_nbr(va_arg(*ap, int));
	return (0);
}

int func_c(va_list *ap)
{
	my_putchar(va_arg(*ap, int));
	return (0);
}
