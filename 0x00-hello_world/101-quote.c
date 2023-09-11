#include <stdio.h>
#include <string.h>
#include <unistd.h>


/**
* main - main
*
* Return: 0
*/
int main(void)
{
	int len = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);
	return (1);
}
