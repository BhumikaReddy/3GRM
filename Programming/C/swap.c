#include <stdio.h>
int main()
{
	int a, b, c;
	printf("enter the values\n");
	scanf("%d\t%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("after swapping:%d and %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping:%d and %d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swapping:%d and %d\n",a,b);
	return 0;
} 
