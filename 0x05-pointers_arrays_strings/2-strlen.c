#include "main.h"
#include <string.h>


/**
 * _strlen - function that returns the length of a string.
 *
 * @s: a pointer to an int that will be changed/updated.
 *
 * Return: void that means our answer is correct.
 */

int _strlen(char *s)
{
	int i;
	
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

   return (i);
}

