#include <unistd.h>
/**
 * _putchar - write string
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
