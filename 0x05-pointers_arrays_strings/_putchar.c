#include <unistd.h>

/**
* _putchar - write the character c to sttdout
*@c: The character to print
*
*Return: On success 1.
*On error, -1 is returned, and error is there returned 
*/

int _putcar(char c)
{
return (write(1, &c, 1));
}