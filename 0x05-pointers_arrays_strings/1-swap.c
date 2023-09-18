/**
 * swap_int - swaps the values of two integers
 * @a: integer 1
 * @b: integer 2
 */
void swap_int(int *a, int *b)
{
	int a_val = *a;

	*a = *b;

	*b = a_val;
}
