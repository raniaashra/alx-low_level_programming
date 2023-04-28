#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * positive_or_negative - check if it positive or zero or negative
 * @n: chaeck value
 * Return: 0
 */
void positive_or_negative(int n)
{

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
	printf("%d is positive", n);
}
else if (n == 0)
{
	printf("%d is zero", n);
}
else
{
	printf("%d is negative", n);
}
return (0);
}
