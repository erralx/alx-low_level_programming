#include <stdio.h>
#include <stdlib.h>

/**
 * getDigit - gets the digit as int
 * @c: digit as char
 *
 * Return: c as int
 */
int getDigit(char c)
{
	return (c - '0');

}
/**
 * getChar - gets the digit as char
 * @d: digit as int
 *
 * Return: d as char
 */
char getChar(int d)
{
	return (d + '0');
}

/**
 * isDigit - checks whether char is digit
 * @c: digit as char
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int isDigit(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

/**
 * _strlen - gets the length of a string
 * @s: string whose length to get
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}

/**
 * rmv_leadz - returns provided num without leading zeroes
 * @s: num (as string) whose leading zeroes to remove
 *
 * Return: s without leading zeroes
 */
char *rmv_leadz(char *s)
{
	char *n;
	int n_len = 0;
	int i, j;

	int isLead;

	i = 0;
	isLead = 1;
	while (s[i] != '\0')
	{
		if (isLead && s[i] == '0')
		{
			i++;
			continue;
		}

		isLead = 0;
		n_len++;
		i++;
	}

	n = malloc(n_len);

	for (i = 0, j = 0, isLead = 1; s[i] != '\0'; i++)
	{
		if (isLead && s[i] == '0')
			continue;

		isLead = 0;
		n[j] = s[i];
		j++;
	}

	return (n);
}


/**
 * _padstart - pads provided num (as string) with leading zeroes
 * @s: num to pad
 * @len: wanted length
 *
 * Return: Padded num of length len
 */
char *_padstart(char *s, int len)
{
	char *res = malloc(len + 1);
	int i, j;

	int s_len = _strlen(s);

	if (len < s_len)
	{
		printf("[_padStart] Error: len < s_len");
		exit(1);
	}

	res[len] = '\0';
	for (i = len - 1, j = s_len - 1; i >= 0; i--, j--)
	{
		if (j >= 0)
			res[i] = s[j];
		else
			res[i] = '0';
	}

	return (res);
}

/**
 * mul_bydigit - multiplies a number by a digit
 * @_n: number to multiply
 * @d: digit to multiply _n by
 * @z: number of zeroes after digit
 *
 * Return: product of _n by d
 */
char *mul_bydigit(char *_n, char d, int z)
{
	int _n_len = _strlen(_n);
	/* int _n_bytes = _n_len + 1; */

	int prod_len = _n_len + 1;
	int prod_bytes = prod_len + 1;
	char *prod = malloc(prod_bytes);

	char *n = _padstart(_n, prod_len);

	int i;

	int carry, j;

	prod[prod_bytes - 1] = '\0';
	for (i = prod_bytes - 2; z > 0; z--, i--)
	{
		prod[i] = '0';
	}

	for (carry = 0, j = prod_bytes - 2; i >= 0; i--, j--)
	{
		int mul = getDigit(n[j]) * getDigit(d) + carry;

		carry = mul / 10;
		prod[i] = getChar(mul % 10);
	}

	return (prod);
}

/**
 * _sum - Sums two numbers
 * @_n1: 1st number
 * @_n2: 2nd number
 *
 * Return: sum of _n1 and _n2
 */
char *_sum(char *_n1, char *_n2)
{
	char *res;
	int res_len, res_bytes;

	char *n1, *n2;
	int n1_len, n2_len;

	int carry, i;

	n1_len = _strlen(_n1), n2_len = _strlen(_n2);
	if (n1_len > n2_len)
		res_len = n1_len + 1;
	else
		res_len = n2_len + 1;

	n1 = _padstart(_n1, res_len), n2 = _padstart(_n2, res_len);

	res_bytes = res_len + 1;

	carry = 0;

	res = malloc(res_bytes);

	res[res_bytes - 1] = '\0';
	for (i = res_bytes - 2; i >= 0; i--)
	{
		int sum = getDigit(n1[i]) + getDigit(n2[i]) + carry;

		carry = sum / 10;
		res[i] = getChar(sum % 10);
	}
	return (res);
}


/**
 * get_num_len - gets the length of a number string
 * @num: number whose length to get
 *
 * Return: Length of num
 */
int get_num_len(char *num)
{
	int len, i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (!isDigit(num[i]))
		{
			printf("Error\n");
			exit(98);
		}

		len++;
	}

	return (len);
}

/**
 * main - multiplies two positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *res = "";
	int res_len, res_bytes;
	char *num1, *num2, *_num1, *_num2;
	int _num1_len = 0, _num2_len = 0;
	int i, z;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	_num1 = argv[1], _num2 = argv[2];
	_num1_len = get_num_len(_num1), _num2_len = get_num_len(_num2);

	res_len = _num1_len + _num2_len, res_bytes = res_len + 1;
	res = _padstart(res, res_len);
	num1 = _padstart(_num1, res_len), num2 = _padstart(_num2, res_len);

	for (i = res_bytes - 2, z = 0; i >= 0; i--, z++)
		res = _sum(res, mul_bydigit(num1, num2[i], z));

	res = rmv_leadz(res);

	printf("%s\n", res);

	return (0);
}
