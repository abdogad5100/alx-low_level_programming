/*
 * File: 0-positive_or_negative.c
 * Auth: Lahcen Oubbaih
 */
#include <stdio.h>
/*
 * main - prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);

	putchar ('\n');

	return (0);
}
