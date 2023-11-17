#include "3-calc.h"

/**
 * get_op_func - operator selector function
 * @s: operator in string
 * Return: integer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t *op = init_op(s);

	if (op == NULL)
		return (NULL);

	return (op->f);
}

/**
 * init_op - function
 * @s: a string
 * Return: an op_t
 */
op_t *init_op(char *s)
{
	op_t *operator;
	int count = 0;
	char *tab[] = {"+", "-", "*", "/", "%"};
	int (*operation[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};

	operator = malloc(sizeof(op_t));
	if (operator != NULL)
	{
		while (*(tab + count))
		{
			if (*s == *(*(tab + count)))
			{
				operator->op = *(tab + count);
				operator->f = (operation[count]);
				return (operator);
			}
			count++;
		}
	}
	return (NULL);
}
