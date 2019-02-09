#include <stdio.h>
void convert_to_binary (int num, char convert[])
{
	int i;
	int total = sizeof (int) *8;
	for (i=0; i<total; i++, num>>=1)
		convert [total - (i+1)] = (num & 1) +'0';
	convert [total] = '\0';
}
