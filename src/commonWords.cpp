/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>
#include<string.h>
#include <malloc.h>

#define SIZE 31

char ** commonWords(char *str1, char *str2) {
	if (str1 == NULL || str2 == NULL)
		return NULL;

	char strword1[20][20];
	int count1, count2;
	int i = 0;
	char **output = (char**)malloc(100 * sizeof(char *));
	int k = 0;
	char strword2[20][20];
	for (int j = 0; str1[j] != '\0'; j++){
		if (str1[j] != ' ')
			strword1[i][k++] = str1[j];
		else{
			i++;
			k = 0;
		}
	}
	count1 = i;
	i = 0; k = 0;

	for (int j = 0; str2[j] != '\0'; j++){
		if (str2[j] != ' ')
			strword2[i][k++] = str2[j];
		else{
			i++;
			k = 0;
		}
	}

	count2 = i;

	int r = 0;
	for (i = 0; i <= count1; i++){

		for (int j = 0; j <= count2; j++){
			
			if (strcmp(strword1[i], strword2[j]) == 0){
			
				output[r] = (char*)malloc(20 * sizeof(char));

				output[r++] = strword1[i];
			}
		}
	}

	if (r == 0)
		return NULL;
	else
		return output;
}

