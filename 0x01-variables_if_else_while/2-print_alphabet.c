#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (True)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char alpha;
	/**int n;
	 *srand(time(0));
       	 *n = rand() - RAND_MAX / 2;
	 */
	/* your code goes there */
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
	putchar('\n');
	return (0);
}
