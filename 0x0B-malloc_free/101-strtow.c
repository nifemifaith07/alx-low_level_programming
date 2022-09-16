#include "main.h"

int word_len(char *str)
{
	int index = 0, len = 0;

	while ((str[index]) && (str[index] != ' '))
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *str)
{
	int w = 0;

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
	char **ptr;
	int index = 0, words, letters, a, l;

	if (!str)
		return (NULL);
	words = count_word(str);
	if (words == 0)
		return (NULL);

	ptr = malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (NULL);
	for (a = 0; a < words; a++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		ptr[a] = malloc(sizeof(char) * (letters + 1));
		if (!ptr[a])
		{
			for (index -= 1; index >= 0; index--)
				free(ptr[index]);
			free(ptr);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
		{
			ptr[a][l] = str[index];
			index++;
		}
		ptr[a][l] = '\0';
	}
	ptr[a] = NULL;
	ptr[a + 1] = NULL;

	return (ptr);
}
