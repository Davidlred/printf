/**
 * strlen - prints out the length of an int
 * @n: The target int
 * @base: Number base of the int
 * Return: The length of an integer
 */
int strlen(long int n, int base)
{
	int len = 0;

	while (n)
	{
		n = n / base;
		len++;
	}
	return (len);
}

