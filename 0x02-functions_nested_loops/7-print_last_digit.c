#include "main.h"
/**
 * print_last_digit - it prints the last digit of a number
 * @n: the number to check
 * Return: last digit
 */

int print_last_digit(int n)
{
int LastNum;
LastNum = n % 10;
if (LastNum < 0)
{
LastNum = LastNum * -1;
}
_putchar(LastNum + '0');
return (LastNum);
}
