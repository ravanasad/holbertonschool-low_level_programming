#include<stdio.h>
/**
 * main - print all the letters except q and e
 * Return: Always 0
 */
int main(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
	{
		if (((a != 'e') ^ (a != 'q')) != 1)
		{
			putchar(a);
		}
	}
	printf("\n");
	return (0);
}
