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

	while (*s != '\0')
    {
        if (*s == c)
            return (c);
        s++;
    }
    return (NULL);
}
