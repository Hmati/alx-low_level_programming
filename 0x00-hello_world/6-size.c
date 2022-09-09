#include<stdio.h>

/**
 *main - Entry point
 *
 *Return: always 0
 */
int main(void)
{
int a;
char c;
float f;
long int li;
long long int lli;
printf("Size of a char:%zu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int:%zu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a float:%zu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of a long int:%zu byte(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int:%zu byte(s)\n", (unsigned long)sizeof(lli));
return (0);
}
