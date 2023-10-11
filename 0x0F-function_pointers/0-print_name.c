/*
 * print_name - Prints a name
 * @name: name to print
 * @f: printer function
 * */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
