#include "shell.h"
int print_Number(int n, int *p)
{
	unsigned int new = n;
	int cont;

	if (n < 0)
	{
		_putchar('-', p);
		new *= -1;
		cont = 1;
	}
	if (new / 10)
	{
		print_Number((new / 10), p);
	}
	_putchar(((new % 10) + '0'), p);
	while (new > 10)
	{
		new /= 10;
		cont++;
	}
	cont++;
	return (cont);
}
