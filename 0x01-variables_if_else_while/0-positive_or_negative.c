#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - entry
* Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("The number is positive.\n", n);
}
else if (n == 0)
{
printf("The number is zero.\n", n);
}
else
{
printf("The number is negative.\n", n);
}
return (0);
}
