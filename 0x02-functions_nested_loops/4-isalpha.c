#include "main.h"
/**
 * _isalpha - chaecks alphabetic 
 * @c: check if is alpha
 * Return: 1 if letter is lower and upper or 0 if other
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
