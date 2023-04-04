
/**
 * _strspn - a function that gets the
 *           length of a prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j, k;

    i = j =k = 0;
    while (s[i] != '\0')
    {
        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
            {
                k++;
                break;
            }
            j++;
        }
        if (s[i] != accept[j])
        {
            return (k);
        }
        j = 0;
        i++;
    }
    return (k);
}
