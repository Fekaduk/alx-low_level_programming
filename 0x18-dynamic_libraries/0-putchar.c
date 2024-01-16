#include "main.h"

/**
*main - function prints text as output
*
*Return:return 0
*/
int main(void)
{
	char loop[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(loop[i]);
	}
	_putchar(10);
	return (0);
}
