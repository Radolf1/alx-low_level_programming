#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	end = n % 10;

	if (end > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, end);
	}
	else if (end == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, end);
	}
	else (end <= 5 && end != 0)
	{
		printf("Last digit of %d is %d and is less than6 and not 0\n", n, end);
	}
	return (0);
}
