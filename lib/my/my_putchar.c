/*
** EPITECH PROJECT, 2017
** my_putchar.c
** File description:
** putchar
*/

#include <my.h>
#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}
