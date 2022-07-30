#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * s1: pointer to string
 * s2: pointer to string
 *
 * Return: pointer to newly allocated space in memory, which contains s1
 * followed by n bytes of s2, null terminated If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
int a1, a2, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (a1 = 0; s1[a1] != '\0'; a1++)
;
for (a2 = 0; s2[a2] != '\0'; a2++)
;
if (n >= a2)
n = a2;


}
