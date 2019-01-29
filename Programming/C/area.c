#include <stdio.h>
#include <math.h>
int main()
{
	int a , b, c, s;
	printf("enter length of the sides");
	scanf("%d\t%d\t%d",&a,&b,&c);
	double ar;
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area=%lf\n",ar);
}
