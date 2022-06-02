#include <stdio.h>
/**
* main - Prints "with proper grammar, but the ouptu is a piece of art,"
* Return: Always 0 (Success)
*/
int main(void)
{
char acharacter;
int ainteger;
float afloat;
long along;
long long alonglong;

printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
printf("Size of an int: %lu byte(s)\n", sizeof(ainteger));
printf("Size of a float: %lu byte(s)\n", sizeof(afloat));
printf("Size of a long int: %lu byte(s)\n", sizeof(along));
printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglong));
return (0);
}
