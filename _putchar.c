#include <unistd.h>



int _putchar(char c, int *p)
{
	*p += 1;

	return (write(1, &c, 1));
}
