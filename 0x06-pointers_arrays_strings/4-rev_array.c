/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	n--;

	while (i < n)
	{
		tmp = a[i];

		a[i] = a[n];

		a[n] = tmp;

		i++;

		n--;
	}
}
