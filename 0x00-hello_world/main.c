#include<stdio.h>
/**
 *main -prints the message in the main function 
 *
 * Return always (0):sucess
 */
int main(void)
{
	int a;
	char c;
	float f;
	long int li;
	long long int lli;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(a));
        printf("Size of a floa: %lu byte(s)\n",(unsigned long)sizeof(f));  
        printf("Size of a long int : %lu byte(s)\n",(unsigned long)sizeof(li)); 
	printf("Size of an long long int : %lu byte(s)\n",(unsigned long)sizeof(lli));
     	return(0);	
}	
