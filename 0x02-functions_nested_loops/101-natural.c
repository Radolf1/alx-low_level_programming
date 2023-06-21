#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3or 5 up t0 1024
 * Return: True
 */
int main(void)
{
	int i, z = 0;
while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
z += i;
}
i++;
}
printf("%d\n", z);
return (0);
}
