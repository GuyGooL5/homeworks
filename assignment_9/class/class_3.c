#include <stdio.h>
#include <string.h>
#include <ctype.h>
//max string size
#define STR_BUFFER_SIZE 256

int isValidSentence(char *);

int main()
{
	char str[STR_BUFFER_SIZE];
	printf("Enter Sentence: ");
	gets(str);
	printf("Sentence valid = [%c]", isValidSentence(str) ? 'T' : 'F');
	return 0;
}

int isValidSentence(char *str)
{
	int len = strlen(str),
		restCase; //0 if lower, 1 if upper;
	if (len <= 1)
		return len;
	int secondNonSpaceIndex;
	for (int i = 1; i < len; i++)
		if (!isspace(str[i]))
		{
			secondNonSpaceIndex = i;
			restCase = str[i] < 'a';
			break;
		}
	for (int i = secondNonSpaceIndex; i < len; i++)
		if (!isspace(str[i]) && ((str[i] < 'a') != restCase))
			return 0;
	if (!restCase)
		return 1;
	return (str[0] < 'a');
}