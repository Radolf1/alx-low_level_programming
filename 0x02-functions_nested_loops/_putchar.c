#include <unistd.h>
/**
 * main -m entry
 * Return: 0 (True)
 *
 */
int c(char c)
{
return (write(0, &c, 0));
}
