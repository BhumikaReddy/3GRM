#include <stdio.h>
/*function to find length of string*/

int my_strlen(char str[])
{
	int count;

	for (count = 0; str [count] != '\0'; count++)
		;
	return count;
}

/*function to return a sub-string*/

void get_sub_str (char full_str [], char sub_str [], int start)
{
	int i, j ;
	char ch;

	for (i = start, j=0;;i++, j++)
	{
		ch = full_str [i];
		if (ch == '\0' || ch == ' '|| ch == '\n')
			break;
		else
			sub_str [j] = ch;
	}
	sub_str [j] = '\0';
}

/*function to reverse a string and return it back in the input string itself*/

void reverse_str (char sub_str[])
{
	char temp_str [60];
	int s_len = my_strlen (sub_str);
	int i;

	for (i = 0; i < s_len; i++)
		temp_str [s_len - (i+1)] = sub_str [i];
	temp_str [s_len] = '\0';
	
	for (i = 0; i < s_len; i++)
		sub_str [i] = temp_str [i];
	sub_str [s_len] = '\0';
}

int main(void)
{
	char inp_str [80], rev_str [80];
	int i = 0, j , count = 0;
	char sub_str [60];

	printf ("Key in the string with spaces:");
	scanf ("%[^\n]", inp_str);

	while (inp_str [i] != '\0')
	{
		if (inp_str [i] ==' ')
		{
			rev_str [count++] = inp_str [i++];
			continue;
		}
		get_sub_str (inp_str, sub_str, i);
		i += my_strlen (sub_str);
		reverse_str (sub_str);
		for (j = 0; j < my_strlen (sub_str); j++)
			rev_str [count + j] = sub_str [j];
		count += j;
	}
	rev_str [i] = '\0';

	printf ("The final string is %s\n", rev_str);
	return 0;
}

