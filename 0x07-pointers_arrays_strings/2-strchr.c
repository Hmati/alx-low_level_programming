#include"main.h"

/**
*_strchr -  function that locates a character in a string
*@s:String to find the character
*@c:Character to find
*
* Return: Returns a pointer to the first occurrence of the character else NULL
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0, s[i] >= '\0', i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
