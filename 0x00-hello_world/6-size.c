#include<stdio.h>
/**
 * main-print the sring in the main function 
 *
 * Return 0:successfull execution 
 */
int main(void)
{
	int i;
        char a;
        float f;
        long int li;
        long long lli;

	printf("Size of a int : %d  byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a char :%d byte(s)\n",(unsigned long)sizeof(char));
        printf("Size of a float : %d byte(s)\n", (unsigned long)sizeof(float));	
        printf("Size of a long int : %d byte(s)\n", (unsigned long)sizeof(long int));
        printf("Size of a Long long int : %d  byte(s)\n", (unsigned long)sizeof(long long int));
}       return(0);
