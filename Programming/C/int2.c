#include <stdio.h>
void convert_to_binary (int, char[]);
int main()
{
	int num;
	char convert [33];
	printf ("key in a positive integer:");
	scanf ("%d", &num);
	convert_to_binary (num, convert);
	printf ("num %d is %s\n", num , convert);
	return 0;
} 
