#include "main.h"

/**
 * cap_string - capitalize every word in a string
 * @s: the string
 *
 * Return: Pointer to the resulting string
 */

char *cap_string(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[a] = '\n' || s[a] = '\t' || s[a] = ' '
		    || s[a] = ',' || s[a] = '.' || s[a] = ';'
		    || s[a] = ':' || s[a] = '?' ||s[a] = '"'
		    || s[a] = '!' || s[a] = '(' || s[a] = ')'
		    || s[a] = '{' || s[a] = '}')
		{
			if (s[a + 1] >= 97 && s[a + 1] <= 122)
			{
				s[a + 1] = s[a + 1] - 32;
			}'
		}
		a++;
	}
	return (s);
}
