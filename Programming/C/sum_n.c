//sum of 1st n natural numbers

#include <stdio.h>

int main(void)
{
	int n, i, sum = 0;
	printf ("Enter the num:");
	scanf ("%d",&n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	printf ("sum = %d\n", sum);	
	return 0;	
}
