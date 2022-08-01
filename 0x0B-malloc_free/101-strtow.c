#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
* strtow - splits a string into words
* Each element of array should contain a single word, null-terminated
* @str: string parameter
*
* Return: pointer to array of strings(words), 
* NULL if str == NULL or str == "" or if your function fails
*/

char **strtow(char *str)
{
char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

if (str == NULL || str == "")
return (NULL);











}
