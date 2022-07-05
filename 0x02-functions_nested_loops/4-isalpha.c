#include "main.h"
/**
 * _isalpha - checks for  alphabets
 * @c: character to check
 *
 * Return: 1 if alphabet, 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
