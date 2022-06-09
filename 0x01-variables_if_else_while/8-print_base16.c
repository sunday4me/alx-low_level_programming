#include <stdio.h>

/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * You can only use `putchar`, and only 3 times.
 * Return: 0
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
