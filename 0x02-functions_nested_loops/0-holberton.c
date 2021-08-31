#include "main.h"
/**
 * main - Entry point
 * Description: prints 'Holberton \n'
 * Return: Always 0 (success)
 */
int main(void)
{
char stderr[] = "Holberton\n";
int i = 0;

while (stderr[i] != '\0')
	{
	char c = stderr[i];

	_putchar(c);
	i++;
	}
return (0);
}
