#include <stdio.h>
/**
 * main -Display the first 52 fibonacci numbers
 * Return: 0 (succes)
 */
int main(void)
{
	int  x = 0;
	long y = 1, z = 2;
while (x < 50)
{
if (x == 0)
printf("%ld", y);
else if (x == 1)
printf(", %ld", z);
else
{
z += y;
y = z - y;
printf(", %ld", z);
}
++x;
}
printf("\n");
return (0);
}
