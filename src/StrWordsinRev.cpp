/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <stdio.h>
void reverse(char* str, int len)
{
	int i = 0, j = len - 1;
	char temp;
	while (i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}
void str_words_in_rev(char *input, int len){
	int i = 0, j = 0;
	reverse(input, len);
	while (i <= len)
	{
		if (input[i] == ' ' || input[i] == '\0')
		{
			reverse(input + j, i - j);
			j = i + 1;
		}
		i++;
	}
}
