#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints the reverse of lower case alphabets
 * Return: Always (0) success
 */

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

