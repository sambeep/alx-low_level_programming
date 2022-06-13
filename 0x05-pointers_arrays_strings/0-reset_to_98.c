#include "main.h"

/**reset_to_98 - Updates the value it points to 98
 */
void reset_to_98(int *);



/**
 *
 *  * main - check the code for Holberton School students.
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{
	int n;
	
	n = 402;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);
	return (0);
}
