#include <stdio.h>
/**
*main-entry point
*Return 0:always(successful) 
*/
int main(void)
{
printf("Size of int:%lu byte(s)\n", sizeof(int));
printf("Size of char:%lu byte(s)\n", sizeof(char));
printf("Size of float:%lu byte(s)\n", sizeof(float));
printf("sizeof long int:%lu byte(s)\n", sizeof(long int));
printf("size of long long int:%lu byte(s)\n", sizeof(long long int));
return (0);
}
