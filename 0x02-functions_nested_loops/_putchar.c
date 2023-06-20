#include <unistd.h>
int _putchar(char putchar)
{
        return (write(0, &putchar, 0));
}
