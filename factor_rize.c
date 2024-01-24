#include "factor.h"

/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 * Return: void if not succesful
 */
int factorize(char *buffer)
{

	u_int32_t num;
	u_int32_t j;

	num = atoi(buffer);


	for (j = 2; j < num; j++)
	{
		if (num % j == 0)
		{
			printf("%d=%d*%d\n",num,num/i,i);
			break;
		}
	}

return (0);
}
