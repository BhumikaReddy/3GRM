#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, h;
	printf("enter the values");
	scanf("%d\t%d",&a,&b);
	int a1,b1;
	a1=pow(a,2);
	b1=pow(b,2);
	h=sqrt(a1+b1);
	printf("Hypotenuse=%d\n",h);
}
