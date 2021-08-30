#include <holberton.h>
/**
 * main - entry point
 * Description: checks if a character is lower case
 * @c: the integer value it recieves
 * Return: 1 if true 0 if false
 */

int islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/*refer to int c*/
		if c == i
		{
			return (1);
		}
	}
	return (0);
}

