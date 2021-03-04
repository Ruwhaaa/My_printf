/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
**
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int my_printf(char *string, ...)
{
	va_list ap;
	int index = 0;
	va_start(ap, string);

	while (string[index] != '\0') {
		if (string[index] == '%') {
			index++;
			if (string[index] == 's') {
				func_s(&ap);
			}
			else if (string[index] == 'd') {
				func_d(&ap);
			}
			else if (string[index] == 'c') {
				func_c(&ap);
			}
		}
		if (string[index] == '\n') {
			my_putchar('\n');
		}
		index++;
	}
	va_end(ap);
	return(0);
}
