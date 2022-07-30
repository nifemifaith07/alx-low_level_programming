#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * s1: destination string
 * s2: string parameter
 *
 * Return: pointer to newly allocated space in memory, which contains s1
 * followed by n bytes of s2, null terminated If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
