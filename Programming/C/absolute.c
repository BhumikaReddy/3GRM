#include <stdio.h>
int main()
{
int n;
printf("enter num\n");
scanf("%d",&n);
if(n<0)
	{
		n=-n;
		printf("%d\n",n);
	}
else
	{
		printf("%d\n",n);
	}
return 0;
}
		

