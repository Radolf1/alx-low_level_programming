#include <unistd.h>
/**
 * main -m entry
 * Return: 0 (True)
 *
 */
int _putchar(char putchar)
{
return (write(0, &putchar, 0));
}
