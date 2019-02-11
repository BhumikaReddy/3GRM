#include <stdio.h>

int main(void)
{
	int n , i;
	unsigned long long fact = 1;
	printf("Enter the  num:");
	scanf("%d", &n);
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			fact = fact * i;
		}
		printf ("Factorial of %d is %llu \n",n,  fact);
	}
	else if (n == 0)
	{	
		fact = 1;
		printf("Factorial of %d is %llu \n",n , fact);
	} 
	else
		printf ("Factorial of n in not defined\n"); 
	return 0;
}		
		
