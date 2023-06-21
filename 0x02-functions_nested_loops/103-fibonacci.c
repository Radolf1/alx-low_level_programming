#include <stdio.h>
/**
 * main - prints sum of fibonacci numbers
 * Return: true
 */
int main(void)
{
	int x = 0;
	long sum = z, y = 1, z = 2;
while (z + y < 4000000)
{
z += y;
if (z % 2 == 0)
sum += z;
y = z - y;
x++;
}
printf("%ld\n", sum);
return (0);
}
