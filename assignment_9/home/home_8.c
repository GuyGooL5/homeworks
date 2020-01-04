#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//max string size
#define STR_BUFFER_SIZE 256

char *sliceSubString(char *, int, int);

int main()
{
	char str[STR_BUFFER_SIZE];
	int index, length;
	printf("Enter string: ");
	gets(str);
	printf("Enter an index and length to slice: ");
	scanf("%d%d", &index, &length);
	char *slicedArr = sliceSubString(str, index, length);
	printf("sliced string: %s", slicedArr);
	return 0;
}

char *sliceSubString(char *str, int index, int length)
{
	int str_size = strlen(str);
	if (index + length > str_size)
		return NULL;
	if (length == 0)
		return (char *)calloc(1, sizeof(char));
	char *subString = (char *)malloc(1 + length * sizeof(char));
	int i = index;
	for (; i < index + length; i++)
		subString[i - index] = str[i];
	subString[i - index] = 0;
	return subString;
}