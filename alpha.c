/**
 * _isalpha - checks if a character is an alphabet.
 * @a: character to check
 * Return: 1 if is alphabet else 0
 */
int _isalpha(int a)
{
        if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
        {
                return (1);
        }
        return (0);
}

