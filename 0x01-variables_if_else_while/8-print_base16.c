<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	char c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
=======
 #include <stdio.h>

/**
 * main - Entry point
 * Return:0
 */
int main(void)

{
int i, y;	
for (i = 0; i < 10; i++)
{
putchar (i + '0');
}
for (y = 'a'; y <= 'f'; y++)
{
putchar(y);
}

putchar('\n');
return(0); 
} 
>>>>>>> 8583bc64c0fe1f22ba5c4d656c06028cd7db9f3b
