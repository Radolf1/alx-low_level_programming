#include <stdio.h>
/**
 * main - entry
 * Return: 0 (True)
 */
int main(void)
{
	char x;
	int z;
	long int f;
	long long int y;
	float v;
printf("size of a char: %zu byte(s)\n", sizeof(x));
printf("size of a int:  %zu byte(s)\n", sizeof(z));
printf("size of a long int: %zu byte(s)\n", sizeof(f));
printf("size of a long long int: %zu byte(s)\n", sizeof(y));
printf("size of a float: %zu byte(s)\n", sizeof(v));
return (0);
}
