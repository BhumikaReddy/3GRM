#include <stdio.h>
int my_str (char []);
int main(void)
{
	char k_str [40];
	printf("key in the string:");
	scanf ("%s",k_str);
	printf("str length is %d\n", my_str (k_str));
	return 0;
}
