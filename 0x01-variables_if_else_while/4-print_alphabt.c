#include <stdio.h>

<<<<<<< HEAD
#include <unistd.h>

/**

 * main - Entry point

 * Description: prints lowercase alphabets

 * Return: Always 0 (success)
=======


/**

 * main - Prints the alphabet in lowercase, except for q and e.

 *

 * Return: Always 0.
>>>>>>> 6dbee5fda63b70a0aa72b0809e3ed987424a42c2

 */
int main(void)
{
<<<<<<< HEAD
int ch;

for (ch = a; ch <= z; ch++)

{
if (ch != e && ch != q)
{
putchar(ch);
}
else
{
}
}putchar(n);
return (0);
}
=======
char letter;
for (letter = a; letter <= z; letter++)
{
if (letter != e && letter != q)
putchar(letter);
}
putchar(n);
return (0);
}

>>>>>>> 6dbee5fda63b70a0aa72b0809e3ed987424a42c2
