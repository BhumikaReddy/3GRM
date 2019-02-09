#include <stdio.h>
int my_str(char str [])
{
	int count;
	for (count=0; str[count] != '\0'; count ++);
	return count +1;

}

