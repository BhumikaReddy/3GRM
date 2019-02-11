/*Factors and no.of factors*/

#include <stdio.h>
int main(void)
{
	int n, i, sum = 0;
	printf ("Enter the num:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("Factors of %d are %d\n",n ,i);
			sum ++;
		}
	}
	printf("No.of factors of %d is %d \n",n ,sum);
	return 0;
}		

