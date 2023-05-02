#include <unistd.h>
/**
 * _putchar - written character
 * @c: character
 * Return: Success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
