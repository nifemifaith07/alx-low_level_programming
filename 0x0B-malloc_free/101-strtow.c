#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *str)
{
	int w = 0

	while (*str != '\0')
	{
		/* skip spaces */
		if (*str == ' ')
			str++;
		else
		{
			/* count words */
			while(*str != ' ' && *str)
			{
				str++;
			}
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
