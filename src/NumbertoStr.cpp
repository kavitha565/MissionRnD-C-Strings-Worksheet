/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
void reversestr(char *str, int len)
{
	int i = 0, j = len - 1, temp;
	while (i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}
int int_to_str(int n, char str[], int d)
{
	int i = 0, r;
	if (n<0)
	{
		n = -n;
	}
	while (n)
	{
		r = n % 10;
		str[i++] = r + '0';
		n = n / 10;
	}
	while (i < d)
		str[i++] = '0';

	reversestr(str, i);
	str[i] = '\0';
	return i;
}
void number_to_str(float number, char *str,int afterdecimal){
	int len;
	int intpart = (int)number;


	float fraction = number - (float)intpart;


	int i = int_to_str(intpart, str, 0);
	int x = 1, k = afterdecimal;
	while (k>0)
	{
		x = x * 10;
		k--;
	}

	if (afterdecimal != 0)
	{
		str[i] = '.';
		fraction = fraction*x ;
		int_to_str((int)fraction, str + i + 1, afterdecimal);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	len = i;
	if (number<0)
	{
		for (i = len - 1; i >= 0; i--)
		{
			str[i + 1] = str[i];
		}
		str[0] = '-';
	}
}
