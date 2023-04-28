#include <stdio.h>
/**
 * print_square - print square shape 
 * @size: size of square
 * Return: no
 */
void print_square(int size)
{
int x, y;
if (size <= 0)
{
putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
putchar('#');
}
putchar('\n');
}
}
}
