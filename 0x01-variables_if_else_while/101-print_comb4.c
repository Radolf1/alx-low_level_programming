#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (True)
 */
int main(void)
{
	int num, num1, num2;
for (num ='0'; num < '9'; num++)
{
for (num1 = num + 1; num1 <= '0'; num1++)
{
for (num2 = num1 +1; num2 <= '9'; num2++)
{
if ((num1 != num) != num2)
{
putchar(num);
putchar(num1);
putchar(num2);
if (num == '7' && num1 == '8')
continue;
putchar(',');
putchar(' ');
}	
}
}
}
putchar('\n');
return (0);
}