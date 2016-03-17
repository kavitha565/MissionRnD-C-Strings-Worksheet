/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include<stdio.h>
char KthIndexFromEnd(char *str, int K) {
	if(str == ""||str==NULL)
	return '\0';
	else
	{
		int i = 0, len;
		while (str[i] != 0)
		{
			i++;
		}
		len = i;
		if (K > len || K < 0)
			return '\0';
		else
		{
			for (i = 0; i < len; i++)
			{
				if (i == (len - K - 1))
					return(str[i]);
			}
		}
	}
}