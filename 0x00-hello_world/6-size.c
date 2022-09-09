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

	printf("Size of a int : %d  byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a char :%d byte(s)\n",(unsigned long)sizeof(a));
        printf("Size of a float : %d byte(s)\n", (unsigned long)sizeof(f));	
        printf("Size of a long int : %d byte(s)\n", (unsigned long)sizeof(li));
        printf("Size of a Long long int : %d  byte(s)\n", (unsigned long)sizeof(lli));
}       return(0);
