/**
 * _atoi - converts a string to an integer
 *
 * @s: string input parameter
 *
 * Return: converted integer from string
*/

int _atoi(char *s)
{
    int n = 0;
    char isNumber = 'F';

    while (*s != '\0')
    {
            if (*s >= '0' && *s <= '9')
            {
                    n = (n * 10) + *s;
                    s++;
                    isNumber = 'T';
            } else {
                    if (isNumber == 'T')
                            break;
                    s++;
            }
    }
    return (n);
}
