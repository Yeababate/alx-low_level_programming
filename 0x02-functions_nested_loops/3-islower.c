#include "main.h"

/**
 * _islower - show 1 if a character is lowercase.
 * @c: The character ASCII code
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
