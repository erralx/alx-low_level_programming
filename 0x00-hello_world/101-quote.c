#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define STRING "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/**
* main - main
*
* Return: 0
*/
int main(void)
{
	int len = strlen(STRING);

	write(1, STRING, len);
	return (1);
}
