#include "main.h"

/**reset_to_98 - Updates the value it points to 98
 * @n: pointer to n
 * Return: void
 */

void reset_to_98(int *n)

{
int n;
n = 402;
reset_to_98(&n);
printf("%d\n", n);
return (0);
}
