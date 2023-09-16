#include <stdio.h>
/**
 * main - A program that prints the various sizes of computer data types
 *
 * Return: 0 always (success)
 */
int main(void)
{
char a;
int b;
long int x;
long long int y;
float f;
printf("Size of a char:%c 1 byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int:%d 4 byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int:%d 8 byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long long int:%lu 8 byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a float:%f 4 byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

