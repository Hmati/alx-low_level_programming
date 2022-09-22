#include "main.h"
/**
 *_strcmp -  a function that compares two strings
 *@s1: first string
 *@s2:second string
 *Return: returns zero if s1 == s2
 *	  returns negative number if s1 < s2
 *	  returns positive number if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 = *s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
			break;

		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else
		return (-1);
}
