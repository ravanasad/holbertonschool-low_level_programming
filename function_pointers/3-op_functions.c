#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - add function
 * @a: first param
 * @b: second param
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub function
 * @a: first param
 * @b: second param
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul function
 * @a: first param
 * @b: second param
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div function
 * @a: first param
 * @b: second param
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod function
 * @a: first param
 * @b: second param
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
	return (a % b);
}
