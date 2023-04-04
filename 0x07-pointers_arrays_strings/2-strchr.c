<<<<<<< HEAD
=======
#include "main.h"
>>>>>>> 2de59000a2f5e69cff4caf8cd471e34ef2299e38
#define NULL 0

/**
* _strchr - locate 1st occurrence of char in string and returns pointer there
* @s: string to search
* @c: target characer
* Return: pointer to that character in string
*/

char *_strchr(char *s, char c)
{
	int i = 0;

<<<<<<< HEAD
	while (*s != '\0')
    {
        if (*s == c)
            return (c);
        s++;
    }
    return (NULL);
=======
	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);

	else
		return (NULL);
>>>>>>> 2de59000a2f5e69cff4caf8cd471e34ef2299e38
}
